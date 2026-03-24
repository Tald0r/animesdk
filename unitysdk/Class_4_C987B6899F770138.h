#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardShowPopWindowNode_ChessboardShowPopType.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class EventArgs; }

#define CLASS_4_C987B6899F770138_METHOD_4_2FE2714C60BDE2E2_OFFSET UNITYSDK_OFFSET(0x92D4610)
#define CLASS_4_C987B6899F770138_METHOD_4_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x92D4750)
#define CLASS_4_C987B6899F770138_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x92D51A0)
#define CLASS_4_C987B6899F770138_METHOD_4_B184336BB2F50398_OFFSET UNITYSDK_OFFSET(0x92D5210)
#define CLASS_4_C987B6899F770138_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92D51B0)
#define CLASS_4_C987B6899F770138_METHOD_4_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x92D5070)
#define CLASS_4_C987B6899F770138__CTOR_OFFSET UNITYSDK_OFFSET(0x92D5020)

inline static constexpr unsigned int Class_4_C987B6899F770138_TypeDefinitionIndex = 72412;

class Class_4_C987B6899F770138 : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::UIWindowController* Field_4_2; // 0x40
	::MoleMole::Config::ConfigChessboardShowPopWindowNode_ChessboardShowPopType Field_4_0; // 0x48
	::System::Int32 Field_4_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_2FE2714C60BDE2E2(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138_METHOD_4_2FE2714C60BDE2E2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138_METHOD_4_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_4_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138_METHOD_4_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_B184336BB2F50398(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_4_C987B6899F770138_METHOD_4_B184336BB2F50398_OFFSET))(this, a1);
	}
};
