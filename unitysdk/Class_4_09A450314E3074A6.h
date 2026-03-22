#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigChessboardChessAnim; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_09A450314E3074A6_METHOD_4_0FC1CEE4654C1D74_OFFSET UNITYSDK_OFFSET(0xC518500)
#define CLASS_4_09A450314E3074A6_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xC519030)
#define CLASS_4_09A450314E3074A6_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xC518600)
#define CLASS_4_09A450314E3074A6_METHOD_4_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xC518760)
#define CLASS_4_09A450314E3074A6_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0xC519020)
#define CLASS_4_09A450314E3074A6_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC519090)
#define CLASS_4_09A450314E3074A6_METHOD_4_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xC518660)
#define CLASS_4_09A450314E3074A6__CTOR_OFFSET UNITYSDK_OFFSET(0xC518FA0)

inline static constexpr unsigned int Class_4_09A450314E3074A6_TypeDefinitionIndex = 43752;

class Class_4_09A450314E3074A6 : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::Config::ConfigChessboardChessAnim* Field_4_0; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FC1CEE4654C1D74(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_0FC1CEE4654C1D74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_4_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_4_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_09A450314E3074A6_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
