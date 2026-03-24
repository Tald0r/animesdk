#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3D3D5AB52AC6095A;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6E27A6139B6AC956_METHOD_1_09B6059750850819_OFFSET UNITYSDK_OFFSET(0x73CA520)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_42A20319B2CB4A91_OFFSET UNITYSDK_OFFSET(0x73CA1A0)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_4BE6BDBD279BA77E_OFFSET UNITYSDK_OFFSET(0x73CA380)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_96644F7BA56FA8B8_1_OFFSET UNITYSDK_OFFSET(0x73CA4A0)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_96644F7BA56FA8B8_OFFSET UNITYSDK_OFFSET(0x73C9D70)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x73CA490)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_D6704D245776A9EF_OFFSET UNITYSDK_OFFSET(0x73CA7B0)
#define CLASS_1_6E27A6139B6AC956_METHOD_1_EC6F7D30CB656BC0_OFFSET UNITYSDK_OFFSET(0x73C9DF0)
#define CLASS_1_6E27A6139B6AC956__CTOR_OFFSET UNITYSDK_OFFSET(0x73C9C00)

inline static constexpr unsigned int Class_1_6E27A6139B6AC956_TypeDefinitionIndex = 49518;

class Class_1_6E27A6139B6AC956 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_3_3D3D5AB52AC6095A*>* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_96644F7BA56FA8B8()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_96644F7BA56FA8B8_OFFSET))(this);
	}

	::System::Boolean Method_1_42A20319B2CB4A91(::System::Int32 a1, ::System::Int32& a2, ::Class_3_3D3D5AB52AC6095A*& a3, ::System::Int32& a4, ::System::Boolean& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::Class_3_3D3D5AB52AC6095A*&, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_42A20319B2CB4A91_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_4BE6BDBD279BA77E(::System::Int32 a1, ::Class_3_3D3D5AB52AC6095A*& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_3_3D3D5AB52AC6095A*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_4BE6BDBD279BA77E_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_EC6F7D30CB656BC0(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_EC6F7D30CB656BC0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_96644F7BA56FA8B8_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_96644F7BA56FA8B8_1_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_09B6059750850819(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_09B6059750850819_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_3_3D3D5AB52AC6095A*>* Method_1_D6704D245776A9EF()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_3D3D5AB52AC6095A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E27A6139B6AC956_METHOD_1_D6704D245776A9EF_OFFSET))(this);
	}
};
