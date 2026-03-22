#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13AECAB1AEC5B524.h"

class Class_2_B62C942A2774BBB8;
class Class_3_1699D6295DC3F818_6;
class Class_3_28A3A399628C6698;
class Class_3_A9E2939AF1A43E78_2;
class Class_3_C06E38DCB063E975;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_72B69AFB8518BAD2_METHOD_2_143284F0F316140B_OFFSET UNITYSDK_OFFSET(0x7BDA040)
#define CLASS_2_72B69AFB8518BAD2_METHOD_2_2BA2AE9198BF8319_OFFSET UNITYSDK_OFFSET(0x7BD9A60)
#define CLASS_2_72B69AFB8518BAD2_METHOD_2_3D3C59526D064E7E_OFFSET UNITYSDK_OFFSET(0x7BD9E80)
#define CLASS_2_72B69AFB8518BAD2_METHOD_2_6597D4884E1FE329_OFFSET UNITYSDK_OFFSET(0x7BD9C80)
#define CLASS_2_72B69AFB8518BAD2_METHOD_2_BFB1CB9D82A6F47E_OFFSET UNITYSDK_OFFSET(0x7BDA200)
#define CLASS_2_72B69AFB8518BAD2__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD9DE0)

inline static constexpr unsigned int Class_2_72B69AFB8518BAD2_TypeDefinitionIndex = 39863;

class Class_2_72B69AFB8518BAD2 : public ::Class_1_13AECAB1AEC5B524
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x20
	::Class_3_A9E2939AF1A43E78_2* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2__CTOR_OFFSET))(this);
	}

	::System::Object* Method_2_2BA2AE9198BF8319(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2_METHOD_2_2BA2AE9198BF8319_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_1699D6295DC3F818_6* Method_2_3D3C59526D064E7E(::System::Int32 a1)
	{
		return ((::Class_3_1699D6295DC3F818_6*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2_METHOD_2_3D3C59526D064E7E_OFFSET))(this, a1);
	}

	::Class_3_28A3A399628C6698* Method_2_143284F0F316140B(::System::String* a1)
	{
		return ((::Class_3_28A3A399628C6698*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2_METHOD_2_143284F0F316140B_OFFSET))(this, a1);
	}

	::Class_3_C06E38DCB063E975* Method_2_BFB1CB9D82A6F47E(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::Class_3_C06E38DCB063E975*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2_METHOD_2_BFB1CB9D82A6F47E_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_C06E38DCB063E975* Method_2_6597D4884E1FE329(::System::Int32 a1)
	{
		return ((::Class_3_C06E38DCB063E975*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2_METHOD_2_6597D4884E1FE329_OFFSET))(this, a1);
	}
};
