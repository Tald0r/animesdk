#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_234;
namespace MoleMole { class UIInLevelSkillButtonBranchBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_297C1A37FF1E006F_METHOD_1_6D8237634ECF3860_OFFSET UNITYSDK_OFFSET(0x672D990)
#define CLASS_1_297C1A37FF1E006F_METHOD_1_8A045220BBE84AD3_OFFSET UNITYSDK_OFFSET(0x672DAF0)
#define CLASS_1_297C1A37FF1E006F__CTOR_OFFSET UNITYSDK_OFFSET(0x672D980)

inline static constexpr unsigned int Class_1_297C1A37FF1E006F_TypeDefinitionIndex = 39111;

class Class_1_297C1A37FF1E006F : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_297C1A37FF1E006F__CTOR_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIInLevelSkillButtonBranchBaseController* Method_1_6D8237634ECF3860(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIInLevelSkillButtonBranchBaseController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_297C1A37FF1E006F_METHOD_1_6D8237634ECF3860_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_234* Method_1_8A045220BBE84AD3(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_0_16E4307DCC419505_234*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_297C1A37FF1E006F_METHOD_1_8A045220BBE84AD3_OFFSET))(this, a1, a2);
	}
};
