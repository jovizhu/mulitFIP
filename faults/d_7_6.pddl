(define (domain faults)
 (:types operation fault)
 (:constants  f1 f2 f3 f4 f5 f6 - fault 
              o1 o2 o3 o4 o5 o6 o7 - operation)
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
  :precondition (and  (not_fault f1) (not_fault f2) (not_fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 (:action D_2_perform_operation_1_fault
   :parameters (?o - operation)
   :precondition (and  (not_fault f1) (not_fault f2) (not_fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f1) (not (not_fault f1))
                                  (faulted_op ?o f1) (last_fault f1))
 )
 
 
 (:action D_1_perform_operation_2_fault
  :parameters (?o - operation)
  :precondition (and  (fault f1) (not_fault f2) (not_fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 (:action D_2_perform_operation_2_fault
   :parameters (?o - operation)
   :precondition (and  (fault f1) (not_fault f2) (not_fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f2) (not (not_fault f2))
                                  (faulted_op ?o f2) (last_fault f2))
 )
 
 
 (:action D_1_perform_operation_3_fault
  :parameters (?o - operation)
  :precondition (and  (fault f1) (fault f2) (not_fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 (:action D_2_perform_operation_3_fault
   :parameters (?o - operation)
   :precondition (and  (fault f1) (fault f2) (not_fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f3) (not (not_fault f3))
                                  (faulted_op ?o f3) (last_fault f3))
 )
 
 
 (:action D_1_perform_operation_4_fault
  :parameters (?o - operation)
  :precondition (and  (fault f1) (fault f2) (fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 (:action D_2_perform_operation_4_fault
   :parameters (?o - operation)
   :precondition (and  (fault f1) (fault f2) (fault f3) (not_fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f4) (not (not_fault f4))
                                  (faulted_op ?o f4) (last_fault f4))
 )
 
 
 (:action D_1_perform_operation_5_fault
  :parameters (?o - operation)
  :precondition (and  (fault f1) (fault f2) (fault f3) (fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 (:action D_2_perform_operation_5_fault
   :parameters (?o - operation)
   :precondition (and  (fault f1) (fault f2) (fault f3) (fault f4) (not_fault f5) (not_fault f6) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f5) (not (not_fault f5))
                                  (faulted_op ?o f5) (last_fault f5))
 )
 
 (:action D_1_perform_operation_6_fault
  :parameters (?o - operation)
  :precondition (and  (fault f1) (fault f2) (fault f3) (fault f4) (fault f5) (not_fault f6) (not_completed ?o))
  :effect (and (completed ?o) (not (not_completed ?o)))
 )
 
 
 
 (:action D_2_perform_operation_6_fault
   :parameters (?o - operation)
   :precondition (and  (fault f1) (fault f2) (fault f3) (fault f4) (fault f5) (not_fault f6) (not_completed ?o))
   :effect (and (completed ?o) (not (not_completed ?o))
                (fault f6) (not (not_fault f6))
                                  (faulted_op ?o f6) (last_fault f6))
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
 (:action repair_fault_3
  :parameters (?o - operation)
  :precondition (and (faulted_op ?o f3) (last_fault f3))
  :effect (and (not (faulted_op ?o f3))
               (not_completed ?o) (not (completed ?o))
               (last_fault f2)
               (not (last_fault f3)) (not_fault f3)
          )
  )
 (:action repair_fault_4
  :parameters (?o - operation)
  :precondition (and (faulted_op ?o f4) (last_fault f4))
  :effect (and (not (faulted_op ?o f4))
               (not_completed ?o) (not (completed ?o))
               (last_fault f3)
               (not (last_fault f4)) (not_fault f4)
          )
  )
 (:action repair_fault_5
  :parameters (?o - operation)
  :precondition (and (faulted_op ?o f5) (last_fault f5))
  :effect (and (not (faulted_op ?o f5))
               (not_completed ?o) (not (completed ?o))
               (last_fault f4)
               (not (last_fault f5)) (not_fault f5)
          )
  )
 (:action repair_fault_6
  :parameters (?o - operation)
  :precondition (and (faulted_op ?o f6) (last_fault f6))
  :effect (and (not (faulted_op ?o f6))
               (not_completed ?o) (not (completed ?o))
               (last_fault f5)
               (not (last_fault f6)) (not_fault f6)
          )
  )
 (:action finish 
  :precondition (and  (completed o1) (completed o2) (completed o3) (completed o4) (completed o5) (completed o6) (completed o7) (not (last_fault f6)))
  :effect (made)
 )
)
