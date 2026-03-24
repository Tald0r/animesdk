#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D70971723CC3AF9E;
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F68A356F07E71451_METHOD_1_74F8C5BC184627AE_OFFSET UNITYSDK_OFFSET(0x8DD8EC0)
#define CLASS_1_F68A356F07E71451_METHOD_1_8C80EC27E249DAB2_OFFSET UNITYSDK_OFFSET(0x8DD91E0)
#define CLASS_1_F68A356F07E71451_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x8DD8DC0)
#define CLASS_1_F68A356F07E71451_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8DD9100)
#define CLASS_1_F68A356F07E71451_METHOD_1_D3CD706903D483ED_OFFSET UNITYSDK_OFFSET(0x8DD8DD0)
#define CLASS_1_F68A356F07E71451_METHOD_1_EE981B78617A832D_OFFSET UNITYSDK_OFFSET(0x8DD9110)
#define CLASS_1_F68A356F07E71451__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD8D50)

inline static constexpr unsigned int Class_1_F68A356F07E71451_TypeDefinitionIndex = 43483;

class Class_1_F68A356F07E71451 : public ::System::Object
{
public:
	::Class_1_D70971723CC3AF9E* Field_1_1; // 0x10
	::System::Random* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::Class_1_D70971723CC3AF9E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_D70971723CC3AF9E*))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*> Method_1_D3CD706903D483ED(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_D3CD706903D483ED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_EE981B78617A832D(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_EE981B78617A832D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_74F8C5BC184627AE(::System::String* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_74F8C5BC184627AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*> Method_1_8C80EC27E249DAB2()
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F68A356F07E71451_METHOD_1_8C80EC27E249DAB2_OFFSET))(this);
	}
};
