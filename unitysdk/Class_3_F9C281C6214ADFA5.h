#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_3B9412253A0E3E79;
class Class_3_B4FB01F6D0265A09;
class Class_3_F35B080B137ECC46;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F9C281C6214ADFA5_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x73D1A90)
#define CLASS_3_F9C281C6214ADFA5_METHOD_3_3EDF51F11BB8555D_OFFSET UNITYSDK_OFFSET(0x73D25D0)
#define CLASS_3_F9C281C6214ADFA5_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x73D33D0)
#define CLASS_3_F9C281C6214ADFA5_METHOD_3_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x73D1E10)
#define CLASS_3_F9C281C6214ADFA5_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x73D2560)
#define CLASS_3_F9C281C6214ADFA5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x73D3440)
#define CLASS_3_F9C281C6214ADFA5_UPDATE_OFFSET UNITYSDK_OFFSET(0x73D1D30)
#define CLASS_3_F9C281C6214ADFA5__CCTOR_OFFSET UNITYSDK_OFFSET(0x73D24F0)
#define CLASS_3_F9C281C6214ADFA5__CTOR_OFFSET UNITYSDK_OFFSET(0x73D24D0)

inline static constexpr unsigned int Class_3_F9C281C6214ADFA5_TypeDefinitionIndex = 67632;

class Class_3_F9C281C6214ADFA5 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9C281C6214ADFA5_TypeDefinitionIndex)->GetStaticField(0x2AF80);
	}
	static ::System::Action_3<::Class_3_B4FB01F6D0265A09*, ::Class_3_3B9412253A0E3E79*, ::Class_3_F35B080B137ECC46*>** StaticGet_Field_3_2()
	{
		return (::System::Action_3<::Class_3_B4FB01F6D0265A09*, ::Class_3_3B9412253A0E3E79*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F9C281C6214ADFA5_TypeDefinitionIndex)->GetStaticField(0x2AF88);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8DC652D916C182B2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_METHOD_3_8DC652D916C182B2_OFFSET))();
	}

	static ::System::Void Method_3_3EDF51F11BB8555D(::Class_3_B4FB01F6D0265A09* a1, ::Class_3_3B9412253A0E3E79* a2, ::Class_3_F35B080B137ECC46* a3)
	{
		return ((::System::Void(*)(::Class_3_B4FB01F6D0265A09*, ::Class_3_3B9412253A0E3E79*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_METHOD_3_3EDF51F11BB8555D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9C281C6214ADFA5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
