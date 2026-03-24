#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectPageController_UIBuddySelect; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_0C207F4EE2784F50_METHOD_1_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x67C1F30)
#define CLASS_1_0C207F4EE2784F50_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x67C1EB0)
#define CLASS_1_0C207F4EE2784F50_METHOD_1_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0x67C2470)
#define CLASS_1_0C207F4EE2784F50_METHOD_1_DC732D755E16D8DB_OFFSET UNITYSDK_OFFSET(0x67C21B0)
#define CLASS_1_0C207F4EE2784F50_METHOD_1_F79840DB7D23E5A6_OFFSET UNITYSDK_OFFSET(0x67C2250)
#define CLASS_1_0C207F4EE2784F50__CTOR_OFFSET UNITYSDK_OFFSET(0x67C1EA0)

inline static constexpr unsigned int Class_1_0C207F4EE2784F50_TypeDefinitionIndex = 46391;

class Class_1_0C207F4EE2784F50 : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::MoleMole::UILineupSelectPageController_UIBuddySelect* Field_1_3; // 0x20
	::UnityEngine::UI::RawImage* Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x30
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0C207F4EE2784F50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C207F4EE2784F50_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C207F4EE2784F50_METHOD_1_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::Int32 Method_1_DC732D755E16D8DB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C207F4EE2784F50_METHOD_1_DC732D755E16D8DB_OFFSET))(this);
	}

	::System::Void Method_1_F79840DB7D23E5A6(::System::Int32 a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_1_0C207F4EE2784F50_METHOD_1_F79840DB7D23E5A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C207F4EE2784F50_METHOD_1_8FD0952225841B46_OFFSET))(this);
	}
};
