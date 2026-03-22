#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class Class_3_BD1C1745FBC83F51;
namespace MoleMole::Config { class AnimatorStateTimeSegment; }

#define CLASS_2_DE5327A4E4FA3B9E_METHOD_2_9D455FE4693966A8_1_OFFSET UNITYSDK_OFFSET(0xA1FB830)
#define CLASS_2_DE5327A4E4FA3B9E_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xA1FB760)
#define CLASS_2_DE5327A4E4FA3B9E__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FB7F0)

inline static constexpr unsigned int Class_2_DE5327A4E4FA3B9E_TypeDefinitionIndex = 61167;

class Class_2_DE5327A4E4FA3B9E : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::Class_3_BD1C1745FBC83F51* Field_2_3; // 0x80
	::MoleMole::Config::AnimatorStateTimeSegment* Field_2_2; // 0x88
	::UnityEngine::Keyframe Field_2_0; // 0x90
	::UnityEngine::Keyframe Field_2_1; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE5327A4E4FA3B9E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE5327A4E4FA3B9E_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE5327A4E4FA3B9E_METHOD_2_9D455FE4693966A8_1_OFFSET))(this);
	}
};
