(define (problem bw_5_6)
  (:domain blocks-domain)
  (:objects b1 b2 b3 b4 b5 - block)
  (:init (emptyhand) (on-table b1) (on b2 b4) (on b3 b2) (on-table b4) (on-table b5) (clear b1) (clear b3) (clear b5))
 (:goal (and (emptyhand) (on-table b1) (on-table b2) (on-table b3) (on-table b4) (on-table b5) (clear b4) (clear b1) (clear b2) (clear b3) (clear b5)))
)
