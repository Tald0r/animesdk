#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2B217063F07E4EE3;
class Class_2_208CC9941471731A_371;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56EE4890A9A413D3_METHOD_1_DC2CCEA1A7E9DE76_OFFSET UNITYSDK_OFFSET(0x16727D30)
#define CLASS_1_56EE4890A9A413D3_METHOD_1_F6E5115FB17B3B4D_OFFSET UNITYSDK_OFFSET(0x16727DF0)
#define CLASS_1_56EE4890A9A413D3__CTOR_OFFSET UNITYSDK_OFFSET(0x16727CA0)

inline static constexpr unsigned int Class_1_56EE4890A9A413D3_TypeDefinitionIndex = 11399;

class Class_1_56EE4890A9A413D3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_371*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DC2CCEA1A7E9DE76(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_371*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_371*>*&))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3_METHOD_1_DC2CCEA1A7E9DE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6E5115FB17B3B4D(::Class_1_2B217063F07E4EE3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B217063F07E4EE3*))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3_METHOD_1_F6E5115FB17B3B4D_OFFSET))(this, a1);
	}
};
