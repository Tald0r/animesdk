#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_765691B743A1DB23;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xD096A90)
#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0xD0969D0)
#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_EF235FDBF409AEA4_OFFSET UNITYSDK_OFFSET(0xD096D60)
#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088__CTOR_OFFSET UNITYSDK_OFFSET(0xD096710)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_63365C960595A088_TypeDefinitionIndex = 47588;

class Class_3_765691B743A1DB23_Class_1_63365C960595A088 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x48
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_1; // 0x78
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x80
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_7; // 0xB0
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0xB8
	::System::Boolean Field_1_0; // 0xE8
	::System::Int32 Field_1_6; // 0xEC

	::System::Void _ctor(::Struct_2_FE667B282E242C72& a1, ::Class_3_765691B743A1DB23* a2, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Class_3_765691B743A1DB23*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_EF235FDBF409AEA4(::System::Boolean a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_EF235FDBF409AEA4_OFFSET))(this, a1, a2);
	}
};
