#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class Class_3_402121D94A91AFBA;
class Class_5_0B648F1F8F6AC84A;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_06B9B0936B6F64B6_OFFSET UNITYSDK_OFFSET(0x8241AB0)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_24E64B8FE038476A_OFFSET UNITYSDK_OFFSET(0x8240FE0)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_471455E2F5DE0CC2_OFFSET UNITYSDK_OFFSET(0x82415F0)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_5248B74C5DE2E067_OFFSET UNITYSDK_OFFSET(0x8241790)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x8240CE0)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_84BB531BC5F1DC5F_OFFSET UNITYSDK_OFFSET(0x8241970)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x8240E10)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_C4FDF5DB46830B8A_OFFSET UNITYSDK_OFFSET(0x8240D80)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x8240FD0)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8241B70)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8240B20)
#define CLASS_3_D6BE13BFAB99CA8A_METHOD_3_E79FC8E58DAC1A8A_OFFSET UNITYSDK_OFFSET(0x82416C0)
#define CLASS_3_D6BE13BFAB99CA8A__CTOR_OFFSET UNITYSDK_OFFSET(0x8240AA0)

inline static constexpr unsigned int Class_3_D6BE13BFAB99CA8A_TypeDefinitionIndex = 76938;

class Class_3_D6BE13BFAB99CA8A : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::Class_5_0B648F1F8F6AC84A* Field_3_3; // 0x40
	::System::String* Field_3_5; // 0x48
	::System::String* Field_3_4; // 0x50
	::Class_3_402121D94A91AFBA* Field_3_2; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x60
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_6; // 0x68
	::System::Single Field_3_0; // 0x78

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Single a2, ::Class_5_0B648F1F8F6AC84A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_C4FDF5DB46830B8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_C4FDF5DB46830B8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Single Method_3_24E64B8FE038476A(::Class_5_0B648F1F8F6AC84A* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_24E64B8FE038476A_OFFSET))(this, a1);
	}

	::System::Single Method_3_5248B74C5DE2E067(::Class_5_0B648F1F8F6AC84A* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_5248B74C5DE2E067_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_E79FC8E58DAC1A8A(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_E79FC8E58DAC1A8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_06B9B0936B6F64B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_06B9B0936B6F64B6_OFFSET))(this, a1);
	}

	::System::String* Method_3_471455E2F5DE0CC2(::System::Int32& a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_471455E2F5DE0CC2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_84BB531BC5F1DC5F(::Class_5_0B648F1F8F6AC84A* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_84BB531BC5F1DC5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6BE13BFAB99CA8A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
