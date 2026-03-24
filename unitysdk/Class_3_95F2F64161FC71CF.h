#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Config { class ConfigLoginCameraMoveToPlayerNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_95F2F64161FC71CF_METHOD_3_0FC1CEE4654C1D74_OFFSET UNITYSDK_OFFSET(0x9DDDF90)
#define CLASS_3_95F2F64161FC71CF_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x9DDEC50)
#define CLASS_3_95F2F64161FC71CF_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0x9DDEBE0)
#define CLASS_3_95F2F64161FC71CF_METHOD_3_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0x9DDE0D0)
#define CLASS_3_95F2F64161FC71CF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9DDEBF0)
#define CLASS_3_95F2F64161FC71CF_METHOD_3_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x9DDEB40)
#define CLASS_3_95F2F64161FC71CF_METHOD_3_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x9DDEBC0)
#define CLASS_3_95F2F64161FC71CF__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDEB30)

inline static constexpr unsigned int Class_3_95F2F64161FC71CF_TypeDefinitionIndex = 51895;

class Class_3_95F2F64161FC71CF : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::MoleMole::Config::ConfigLoginCameraMoveToPlayerNode* Field_3_0; // 0x28
	::Cinemachine::CinemachineVirtualCamera* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FC1CEE4654C1D74(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_0FC1CEE4654C1D74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_3_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Single Method_3_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_95F2F64161FC71CF_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
