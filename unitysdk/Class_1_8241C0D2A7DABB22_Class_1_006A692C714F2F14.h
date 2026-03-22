#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_400;
class Class_3_5A77C0880664FC22;
class Class_3_757A5862D4BBEE41;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_8241C0D2A7DABB22_CLASS_1_006A692C714F2F14_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xB548BD0)
#define CLASS_1_8241C0D2A7DABB22_CLASS_1_006A692C714F2F14_METHOD_1_8DF4953C131A0338_OFFSET UNITYSDK_OFFSET(0xB548420)
#define CLASS_1_8241C0D2A7DABB22_CLASS_1_006A692C714F2F14__CTOR_OFFSET UNITYSDK_OFFSET(0xB548410)

inline static constexpr unsigned int Class_1_8241C0D2A7DABB22_Class_1_006A692C714F2F14_TypeDefinitionIndex = 45536;

class Class_1_8241C0D2A7DABB22_Class_1_006A692C714F2F14 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_3_5A77C0880664FC22* Field_1_2; // 0x18
	::Class_3_757A5862D4BBEE41* Field_1_0; // 0x20
	::Class_0_16E4307DCC419505_400* Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_CLASS_1_006A692C714F2F14__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DF4953C131A0338(::Class_0_16E4307DCC419505_400* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_400*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_CLASS_1_006A692C714F2F14_METHOD_1_8DF4953C131A0338_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_CLASS_1_006A692C714F2F14_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}
};
