#ifndef CONSTRUCTS_INCLUDE
#define CONSTRUCTS_INCLUDE

class AudioInfo
{
	double * _frequency;
	double * _loudness;
	double * _tempo;

public:
	AudioInfo();
	AudioInfo(double * freq, double * loudness, double * tempo);

	void randomize_info();

	bool operator == (const AudioInfo& b) const;

	bool get_frequency(double & freq) const;
	void set_frequency(double freq);
	bool get_loudness(double & loud) const;
	void set_loudness(double freq);
	bool get_tempo(double & tempo) const;
	void set_tempo(double freq);
};

#endif