# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=23" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCE_ANDROID_GL_ES_VERSION_3_0=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "E:/Juce (Projucer) (cpp GUI library)/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/SceneManager.cpp"
    "../../../Source/SceneManager.h"
    "../../../Source/CategoryButton.cpp"
    "../../../Source/CategoryButton.h"
    "../../../Source/Question.cpp"
    "../../../Source/Question.h"
    "../../../Source/QuestionCategory.h"
    "../../../Source/QuestionScene.cpp"
    "../../../Source/QuestionScene.h"
    "../../../Source/MenuScene.cpp"
    "../../../Source/MenuScene.h"
    "../../../Source/UserInterface.cpp"
    "../../../Source/UserInterface.h"
    "../../../Source/BackgroundComponent.cpp"
    "../../../Source/BackgroundComponent.h"
    "../../../Source/MainComponent.h"
    "../../../Source/MainComponent.cpp"
    "../../../Source/Main.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/SceneManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/CategoryButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Question.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/QuestionCategory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/QuestionScene.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/MenuScene.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/UserInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/BackgroundComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../Juce (Projucer) (cpp GUI library)/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv3 "GLESv3")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv3}
    ${egl}
    "cpufeatures"
)
