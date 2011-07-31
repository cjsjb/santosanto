\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key g \major

		R1*4  |
%% 5
		d 4 d 8 g 4 d 4.  |
		e 4 e 8 g 4 e 4.  |
		d 4 g fis a  |
		g 1  |
		b 4 b 8 b 4 b 4.  |
%% 10
		c' 4 c' 8 c' 4 c' 4.  |
		b 4 b a a  |
		b 1  |
		R1*9  |
		d 4 d 8 g 4 d 4.  |
		e 4 e 8 g 4 e 4.  |
		d 4 g fis a  |
%% 25
		g 1  |
		b 4 b 8 b 4 b 4.  |
		c' 4 c' 8 c' 4 c' 4.  |
		b 4 b a a  |
		b 1  |
%% 30
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.

		%Glo -- "ria a" Dios en las al -- tu -- ras,
		%glo -- "ria a" Dios a -- "quí en" la Tie -- rra,
		%paz "y a" -- mor en -- tre los hom -- bres,
		%Glo -- ria, glo -- "ria a" Dios.

		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
	}
>>