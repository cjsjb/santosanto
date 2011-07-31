\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key g \major

                d' 4 d' 8 g' 4 d' 4.  |
                e' 4 e' 8 g' 4 e' 4.  |
                d' 4 g' fis' a'  |
                g' 1  |
%% 5
                d' 4 d' 8 g' 4 d' 4.  |
                e' 4 e' 8 g' 4 e' 4.  |
                d' 4 g' fis' a'  |
                g' 1  |
                d' 4 d' 8 g' 4 d' 4.  |
%% 10
                e' 4 e' 8 g' 4 e' 4.  |
                d' 4 g' fis' a'  |
                g' 1  |
                R1*9  |
                d' 4 d' 8 g' 4 d' 4.  |
                e' 4 e' 8 g' 4 e' 4.  |
                d' 4 g' fis' a'  |
%% 25
                g' 1  |
                d' 4 d' 8 g' 4 d' 4.  |
                e' 4 e' 8 g' 4 e' 4.  |
                d' 4 g' fis' a'  |
                g' 1  |
%% 30
                R1  |
		\bar "|."
	}
>>
