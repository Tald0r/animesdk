#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_77309A275A823E54.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
class Class_5_F60EFCE4D76BF533;
class Class_5_F638703ACD0FA08E;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_E77DE98FC3D1D1F5_METHOD_4_1D3EA226A468280A_OFFSET UNITYSDK_OFFSET(0x6D2FB60)
#define CLASS_4_E77DE98FC3D1D1F5_METHOD_4_C6F2162AC3638665_OFFSET UNITYSDK_OFFSET(0x6D2FD90)
#define CLASS_4_E77DE98FC3D1D1F5__CTOR_OFFSET UNITYSDK_OFFSET(0x6D2FD80)

inline static constexpr unsigned int Class_4_E77DE98FC3D1D1F5_TypeDefinitionIndex = 71789;

class Class_4_E77DE98FC3D1D1F5 : public ::Class_3_77309A275A823E54
{
public:
	::Class_5_F638703ACD0FA08E* Field_4_1; // 0x40
	::Class_5_F60EFCE4D76BF533* Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E77DE98FC3D1D1F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1D3EA226A468280A(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_E77DE98FC3D1D1F5_METHOD_4_1D3EA226A468280A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_C6F2162AC3638665(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_E77DE98FC3D1D1F5_METHOD_4_C6F2162AC3638665_OFFSET))(this, a1, a2, a3, a4);
	}
};
