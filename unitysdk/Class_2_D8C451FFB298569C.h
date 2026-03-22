#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_90E1D0C94F205181.h"
#include "unitysdk/Enum_3_4F5B254ADA117E5F.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIThreeDMapElement_SignalPointContext; }
namespace MoleMole { class UIUrbanMapPointPlayerWidgetController; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_D8C451FFB298569C_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x7B5BA70)
#define CLASS_2_D8C451FFB298569C_METHOD_2_B5758F5D2E73BF1B_OFFSET UNITYSDK_OFFSET(0x7B5BDD0)
#define CLASS_2_D8C451FFB298569C_METHOD_2_CE0D95FB6B7A2F7E_OFFSET UNITYSDK_OFFSET(0x7B5BA80)
#define CLASS_2_D8C451FFB298569C_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x7B5BA60)
#define CLASS_2_D8C451FFB298569C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7B5BA50)
#define CLASS_2_D8C451FFB298569C__CTOR_OFFSET UNITYSDK_OFFSET(0x7B5BDA0)

inline static constexpr unsigned int Class_2_D8C451FFB298569C_TypeDefinitionIndex = 56130;

class Class_2_D8C451FFB298569C : public ::Class_1_90E1D0C94F205181<::MoleMole::UIUrbanMapPointPlayerWidgetController*, ::MoleMole::UIThreeDMapElement_SignalPointContext*>
{
public:
	::Class_2_75527B5277EE1A90<::Struct_2_032E3093F309FC91>* Field_2_0; // 0x1D8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_1; // 0x1E0
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_2; // 0x1E8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Enum_3_4F5B254ADA117E5F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_4F5B254ADA117E5F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_2_75527B5277EE1A90<::Struct_2_032E3093F309FC91>* Method_2_CE0D95FB6B7A2F7E()
	{
		return ((::Class_2_75527B5277EE1A90<::Struct_2_032E3093F309FC91>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_METHOD_2_CE0D95FB6B7A2F7E_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_2_B5758F5D2E73BF1B()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_METHOD_2_B5758F5D2E73BF1B_OFFSET))(this);
	}
};
