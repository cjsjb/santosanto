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
		b 4 a 8 b 2 a 8  |
		b 4 a 8 g 4 g r8  |
%% 15
		b 4 a 8 b 2 a 8  |
		b 4 a 8 g 4 g r8  |
		a 4 a 8 a 2 b 8  |
		a 4 g 8 fis 4 fis r8  |
		a 4 e fis g  |
%% 20
		a 1 ~  |
		a 2. r4  |
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

	\new Lyrics \lyricsto "voz-tenor" {
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.

		Glo -- "ria a" Dios en las al -- tu -- ras,
		glo -- "ria a" Dios a -- "quí en" la Tie -- rra,
		paz "y a" -- mor en -- tre los hom -- bres,
		Glo -- ria, glo -- "ria a" Dios.

		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
		San -- to, san -- to, en el cie -- lo,
		san -- "to es" el Se -- ñor.
	}
>>
