#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardUiPostProcess; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_20FD80BCC94A62BE_METHOD_4_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x66AD1E0)
#define CLASS_4_20FD80BCC94A62BE_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x66AD520)
#define CLASS_4_20FD80BCC94A62BE_METHOD_4_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x66ACAB0)
#define CLASS_4_20FD80BCC94A62BE_METHOD_4_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x66AD530)
#define CLASS_4_20FD80BCC94A62BE_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x66AD470)
#define CLASS_4_20FD80BCC94A62BE_METHOD_4_DA75C361EBED2E92_OFFSET UNITYSDK_OFFSET(0x66AC940)
#define CLASS_4_20FD80BCC94A62BE_METHOD_4_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x66AD4E0)
#define CLASS_4_20FD80BCC94A62BE__CTOR_OFFSET UNITYSDK_OFFSET(0x66AD3F0)

inline static constexpr unsigned int Class_4_20FD80BCC94A62BE_TypeDefinitionIndex = 77787;

class Class_4_20FD80BCC94A62BE : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::UIHollowMainPageController* Field_4_2; // 0x40
	::MoleMole::Config::ConfigChessboardUiPostProcess* Field_4_3; // 0x48
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_4_1; // 0x50
	::System::Single Field_4_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_DA75C361EBED2E92(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_DA75C361EBED2E92_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_4_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20FD80BCC94A62BE_METHOD_4_CA373AA1C7054598_1_OFFSET))(this);
	}
};
