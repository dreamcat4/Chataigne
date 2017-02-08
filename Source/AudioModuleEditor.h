/*
  ==============================================================================

    AudioModuleEditor.h
    Created: 6 Feb 2017 8:46:49pm
    Author:  Ben

  ==============================================================================
*/

#ifndef AUDIOMODULEEDITOR_H_INCLUDED
#define AUDIOMODULEEDITOR_H_INCLUDED

#include "ModuleEditor.h"
#include "AudioModule.h"

class AudioModuleEditor :
	public ModuleEditor
{
public:
	AudioModuleEditor(AudioModule * module, bool isRoot);
	~AudioModuleEditor();

	AudioModule * audioModule;
	AudioDeviceSelectorComponent selector;

	ScopedPointer<InspectableEditor> gainSlider;
	ScopedPointer<InspectableEditor> thresholdSlider;
	
	ScopedPointer<InspectableEditor> valuesCCEditor;

	void resizedInternalContent(Rectangle<int> &r) override;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioModuleEditor)
};


#endif  // AUDIOMODULEEDITOR_H_INCLUDED
