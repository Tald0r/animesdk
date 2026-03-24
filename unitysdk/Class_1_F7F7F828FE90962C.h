#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD58E95ADFF8F5_56;
class Class_3_6187A10BAB170F19;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_1_BE9B8B83AC705E3A;

#define CLASS_1_F7F7F828FE90962C_METHOD_1_0D14C3A8829D2FDB_OFFSET UNITYSDK_OFFSET(0xAE9FBF0)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_639D3EEFA0C7EA0E_OFFSET UNITYSDK_OFFSET(0xAEA0190)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_A302849551355227_OFFSET UNITYSDK_OFFSET(0xAE9FC80)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_E1DA2427B085F596_OFFSET UNITYSDK_OFFSET(0xAE9FD10)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_E46B0BE7E11A158F_OFFSET UNITYSDK_OFFSET(0xAE9FE60)
#define CLASS_1_F7F7F828FE90962C_METHOD_1_EDFF34C73306C6F7_OFFSET UNITYSDK_OFFSET(0xAE9F950)
#define CLASS_1_F7F7F828FE90962C__CTOR_OFFSET UNITYSDK_OFFSET(0xAE9F8A0)

inline static constexpr unsigned int Class_1_F7F7F828FE90962C_TypeDefinitionIndex = 48675;

class Class_1_F7F7F828FE90962C : public ::System::Object
{
public:
	::Class_1_BE9B8B83AC705E3A<::System::Int32, ::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDFF34C73306C6F7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_EDFF34C73306C6F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D14C3A8829D2FDB(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_0D14C3A8829D2FDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A302849551355227(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_A302849551355227_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1DA2427B085F596(::Class_3_32CD58E95ADFF8F5_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_56*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_E1DA2427B085F596_OFFSET))(this, a1);
	}

	::System::Void Method_1_639D3EEFA0C7EA0E(::Class_3_6187A10BAB170F19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6187A10BAB170F19*))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_639D3EEFA0C7EA0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E46B0BE7E11A158F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F7F7F828FE90962C_METHOD_1_E46B0BE7E11A158F_OFFSET))(this, a1);
	}
};
