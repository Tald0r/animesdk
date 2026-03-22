#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"

#define CLASS_2_90DB573BE3B12770_METHOD_2_574D21C2762E8234_OFFSET UNITYSDK_OFFSET(0x75CBB50)
#define CLASS_2_90DB573BE3B12770_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x75CBAA0)
#define CLASS_2_90DB573BE3B12770_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x75CBBD0)
#define CLASS_2_90DB573BE3B12770__CCTOR_OFFSET UNITYSDK_OFFSET(0x75CBA10)
#define CLASS_2_90DB573BE3B12770__CTOR_OFFSET UNITYSDK_OFFSET(0x75CBA80)

inline static constexpr unsigned int Class_2_90DB573BE3B12770_TypeDefinitionIndex = 53088;

class Class_2_90DB573BE3B12770 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x8A; // 0x0
	::System::Boolean Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_574D21C2762E8234(::System::Int32 a1, ::System::Boolean a2, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770_METHOD_2_574D21C2762E8234_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DB573BE3B12770_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
