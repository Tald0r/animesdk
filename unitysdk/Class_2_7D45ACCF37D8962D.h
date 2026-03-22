#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_7632E59391154CB8;
class Class_3_C4DB8D898CBC2756;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7D45ACCF37D8962D_METHOD_2_351EC58F05947F54_OFFSET UNITYSDK_OFFSET(0x7C240F0)
#define CLASS_2_7D45ACCF37D8962D_METHOD_2_5B1F86CCB8579B26_OFFSET UNITYSDK_OFFSET(0x7C24490)
#define CLASS_2_7D45ACCF37D8962D_METHOD_2_7CF132EF9D68586E_OFFSET UNITYSDK_OFFSET(0x7C242A0)
#define CLASS_2_7D45ACCF37D8962D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7C24020)
#define CLASS_2_7D45ACCF37D8962D_METHOD_2_F646AB7CF45EA86F_OFFSET UNITYSDK_OFFSET(0x7C24600)
#define CLASS_2_7D45ACCF37D8962D_ONSTART_OFFSET UNITYSDK_OFFSET(0x7C24080)
#define CLASS_2_7D45ACCF37D8962D__CTOR_OFFSET UNITYSDK_OFFSET(0x7C240E0)

inline static constexpr unsigned int Class_2_7D45ACCF37D8962D_TypeDefinitionIndex = 77786;

class Class_2_7D45ACCF37D8962D : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_351EC58F05947F54(::System::Action_1<::Class_3_7632E59391154CB8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_7632E59391154CB8*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D_METHOD_2_351EC58F05947F54_OFFSET))(this, a1);
	}

	::System::Void Method_2_7CF132EF9D68586E(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D_METHOD_2_7CF132EF9D68586E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5B1F86CCB8579B26(::Class_3_C4DB8D898CBC2756* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C4DB8D898CBC2756*))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D_METHOD_2_5B1F86CCB8579B26_OFFSET))(this, a1);
	}

	::System::Void Method_2_F646AB7CF45EA86F(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Collections::Generic::List_1<::System::Int32>* a8, ::System::Action* a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_7D45ACCF37D8962D_METHOD_2_F646AB7CF45EA86F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
