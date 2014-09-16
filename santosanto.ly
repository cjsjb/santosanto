% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Santo, santo"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*30  %% 1-30
}
globalTempo = {
	\tempo 4 = 132  \skip 1*30
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "santosanto-acordes.inc"
		\new StaffGroup <<
			\include "santosanto-soprano.inc"
			\include "santosanto-mezzo.inc"
			\include "santosanto-tenor.inc"
		>>
		\include "santosanto-violin.inc"
		%\include "santosanto-huevo.inc"
	>>

	\layout {
		\context {
			\RemoveEmptyStaffContext
		}
	}
}
