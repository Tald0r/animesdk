#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_90E1D0C94F205181.h"
#include "unitysdk/Enum_3_4F5B254ADA117E5F.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIThreeDMapElement_LocalPlayerContext; }
namespace MoleMole { class UIUrbanMapPointPlayerWidgetController; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_66CD90356273129A_METHOD_2_9809023166B7D5AD_OFFSET UNITYSDK_OFFSET(0xBBA8610)
#define CLASS_2_66CD90356273129A_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xBBA82B0)
#define CLASS_2_66CD90356273129A_METHOD_2_CE0D95FB6B7A2F7E_OFFSET UNITYSDK_OFFSET(0xBBA82C0)
#define CLASS_2_66CD90356273129A_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xBBA82A0)
#define CLASS_2_66CD90356273129A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBBA8290)
#define CLASS_2_66CD90356273129A__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA85E0)

inline static constexpr unsigned int Class_2_66CD90356273129A_TypeDefinitionIndex = 56512;

class Class_2_66CD90356273129A : public ::Class_1_90E1D0C94F205181<::MoleMole::UIUrbanMapPointPlayerWidgetController*, ::MoleMole::UIThreeDMapElement_LocalPlayerContext*>
{
public:
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_2; // 0x1D8
	::Class_2_75527B5277EE1A90<::Struct_2_032E3093F309FC91>* Field_2_0; // 0x1E0
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_1; // 0x1E8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CD90356273129A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CD90356273129A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CD90356273129A_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Enum_3_4F5B254ADA117E5F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_4F5B254ADA117E5F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CD90356273129A_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_2_75527B5277EE1A90<::Struct_2_032E3093F309FC91>* Method_2_CE0D95FB6B7A2F7E()
	{
		return ((::Class_2_75527B5277EE1A90<::Struct_2_032E3093F309FC91>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CD90356273129A_METHOD_2_CE0D95FB6B7A2F7E_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_2_9809023166B7D5AD()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66CD90356273129A_METHOD_2_9809023166B7D5AD_OFFSET))(this);
	}
};
