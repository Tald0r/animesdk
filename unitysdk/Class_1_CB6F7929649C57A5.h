#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A3DCA8A7B6FC7B62.h"
#include "unitysdk/Struct_2_DA3A109C3E0BFF6B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_15E2D59B6ED67072;
namespace MoleMole { class UIPerformPageController; }
namespace System { class Action; }

#define CLASS_1_CB6F7929649C57A5_METHOD_1_2187C9248405C301_OFFSET UNITYSDK_OFFSET(0xAEC05A0)
#define CLASS_1_CB6F7929649C57A5_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xAEC0750)
#define CLASS_1_CB6F7929649C57A5_METHOD_1_79E50EC0C3F02DAB_OFFSET UNITYSDK_OFFSET(0xAEC06E0)
#define CLASS_1_CB6F7929649C57A5_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xAEC08F0)
#define CLASS_1_CB6F7929649C57A5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xAEC0730)
#define CLASS_1_CB6F7929649C57A5_METHOD_1_8FF8D615CCE13382_OFFSET UNITYSDK_OFFSET(0xAEC0770)
#define CLASS_1_CB6F7929649C57A5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAEC0740)
#define CLASS_1_CB6F7929649C57A5__CTOR_OFFSET UNITYSDK_OFFSET(0xAEC0580)

inline static constexpr unsigned int Class_1_CB6F7929649C57A5_TypeDefinitionIndex = 76005;

class Class_1_CB6F7929649C57A5 : public ::System::Object
{
public:
	::MoleMole::UIPerformPageController* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::Struct_2_DA3A109C3E0BFF6B Field_1_0; // 0x20

	::System::Void _ctor(::Struct_2_DA3A109C3E0BFF6B a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DA3A109C3E0BFF6B, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2187C9248405C301(::Class_1_CB6F7929649C57A5* a1, ::Class_1_15E2D59B6ED67072* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB6F7929649C57A5*, ::Class_1_15E2D59B6ED67072*))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_2187C9248405C301_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_79E50EC0C3F02DAB(::System::Double a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_79E50EC0C3F02DAB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CB6F7929649C57A5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB6F7929649C57A5*))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Struct_2_A3DCA8A7B6FC7B62 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_A3DCA8A7B6FC7B62(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*> Method_1_8FF8D615CCE13382(::Class_1_CB6F7929649C57A5* a1, ::Class_1_15E2D59B6ED67072* a2)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::UIPerformPageController*>(*)(::PVOID, ::Class_1_CB6F7929649C57A5*, ::Class_1_15E2D59B6ED67072*))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_8FF8D615CCE13382_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB6F7929649C57A5_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
