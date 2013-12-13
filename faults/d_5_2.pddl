(define (domain faults)
 (:types operation fault)
 (:constants  f1 f2 - fault 
              o1 o2 o3 o4 o5 - operation)
 (:predicates 
   (not_completed ?o - operation)
   (completed ?o - operation)
   (fault ?f - fault)
   (not_fault ?f - fault)
   (faulted_op ?o - operation ?f - fault)
   (last_fault ?f - fault)
   (made)
  )

 (:action D_1_perform_operation_1_fault
  :parameters (?o - operation)
  :precondition (and  (not_fault f1) (not_fault f2) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 
 (:action D_2_perform_operation_1_fault
   :parameters (?o - operation)
   :precondition (and  (not_fault f1) (not_fault f2) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f1) (not (not_fault f1))
                                  (faulted_op ?o f1) (last_fault f1))
 )
 
 
 
 
 
 
 
 (:action D_1_perform_operation_2_fault
  :parameters (?o - operation)
  :precondition (and  (fault f1) (not_fault f2) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 (:action D_2_perform_operation_2_fault
   :parameters (?o - operation)
   :precondition (and  (fault f1) (not_fault f2) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f2) (not (not_fault f2))
                                  (faulted_op ?o f2) (last_fault f2))
 )
 
 
 
 (:action repair_fault_1
  :parameters (?o - operation)
  :precondition (and (faulted_op ?o f1) (last_fault f1))
  :effect (and (not (faulted_op ?o f1))
               (not_completed ?o) (not (completed ?o))
               (not (last_fault f1)) (not_fault f1)
          )
  )
 (:action repair_fault_2
  :parameters (?o - operation)
  :precondition (and (faulted_op ?o f2) (last_fault f2))
  :effect (and (not (faulted_op ?o f2))
               (not_completed ?o) (not (completed ?o))
               (last_fault f1)
               (not (last_fault f2)) (not_fault f2)
          )
  )
 (:action finish 
  :precondition (and  (completed o1) (completed o2) (completed o3) (completed o4) (completed o5) (not (last_fault f2)))
  :effect (made)
 )
)
