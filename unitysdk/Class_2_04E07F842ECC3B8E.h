#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CLASS_2_04E07F842ECC3B8E_METHOD_2_B5456417EE00D0E7_OFFSET UNITYSDK_OFFSET(0x7FC2A20)
#define CLASS_2_04E07F842ECC3B8E_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x7FC2970)
#define CLASS_2_04E07F842ECC3B8E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7FC2AA0)
#define CLASS_2_04E07F842ECC3B8E__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC28E0)
#define CLASS_2_04E07F842ECC3B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC2950)

inline static constexpr unsigned int Class_2_04E07F842ECC3B8E_TypeDefinitionIndex = 75258;

class Class_2_04E07F842ECC3B8E : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x119; // 0x0
	::System::Boolean Field_2_0; // 0x20
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_B5456417EE00D0E7(::System::Boolean a1, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E_METHOD_2_B5456417EE00D0E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04E07F842ECC3B8E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
