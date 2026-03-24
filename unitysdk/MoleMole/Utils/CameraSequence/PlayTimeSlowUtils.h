#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CC527FA3839977FC;
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CLEARTIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0x6AFD390)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_GETTIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0x6AFD4E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_INVOKETIMESLOWKEY_OFFSET UNITYSDK_OFFSET(0x6AFCA30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_PROCESSMAXSTARTTIME_OFFSET UNITYSDK_OFFSET(0x6AFCC40)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils_TypeDefinitionIndex = 79957;

	class PlayTimeSlowUtils : public ::System::Object
	{
	public:
		static ::System::Void InvokeTimeSlowKey(::System::String* timeSlowKey, ::System::Single minStartTime, ::System::Single maxStartTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_INVOKETIMESLOWKEY_OFFSET))(timeSlowKey, minStartTime, maxStartTime);
		}

		static ::System::Void ProcessMaxStartTime(::Class_1_CC527FA3839977FC* timeSlowData, ::System::Single minStartTime, ::System::Single maxStartTime)
		{
			return ((::System::Void(*)(::Class_1_CC527FA3839977FC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_PROCESSMAXSTARTTIME_OFFSET))(timeSlowData, minStartTime, maxStartTime);
		}

		static ::System::Void ClearTimeSlowKey(::System::String* timeSlowKey)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CLEARTIMESLOWKEY_OFFSET))(timeSlowKey);
		}

		static ::System::Boolean GetTimeSlowKey(::System::String*& timeSlowKey)
		{
			return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_GETTIMESLOWKEY_OFFSET))(timeSlowKey);
		}
	};
}
