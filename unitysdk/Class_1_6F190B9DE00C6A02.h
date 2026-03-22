#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_5A6771CD0CA2718D;
class Class_2_208CC9941471731A_281;
class Class_2_CE524E0BB2F7DB94;
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_1_6F190B9DE00C6A02_METHOD_1_0169F0DBABDADCA6_OFFSET UNITYSDK_OFFSET(0x70E7790)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_1AAAE29F4DB571CA_OFFSET UNITYSDK_OFFSET(0x70E6320)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_26BA8B1178DC2764_OFFSET UNITYSDK_OFFSET(0x70E6CA0)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_42E6F86C0B43B6D4_OFFSET UNITYSDK_OFFSET(0x70E6110)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_5F6BDF3FF43F02F0_OFFSET UNITYSDK_OFFSET(0x70E5C50)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_62F21BF1CB15C228_OFFSET UNITYSDK_OFFSET(0x70E7620)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_6C97FB4165BB19E1_OFFSET UNITYSDK_OFFSET(0x70E79A0)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x70E6990)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_A09E411B8D704F86_OFFSET UNITYSDK_OFFSET(0x70E5660)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_B1712F69A7605204_OFFSET UNITYSDK_OFFSET(0x70E6E70)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_B25ED808FE6F3E06_OFFSET UNITYSDK_OFFSET(0x70E6460)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_B51D7B59543052B1_OFFSET UNITYSDK_OFFSET(0x70E6E50)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_C64D73F881818D6B_OFFSET UNITYSDK_OFFSET(0x70E79C0)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_E3812F04B2228A8B_OFFSET UNITYSDK_OFFSET(0x70E5BA0)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x70E55F0)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_F2EEC5E8503D3622_OFFSET UNITYSDK_OFFSET(0x70E5F40)
#define CLASS_1_6F190B9DE00C6A02_METHOD_1_F97FF40AD1127FEA_OFFSET UNITYSDK_OFFSET(0x70E6AE0)
#define CLASS_1_6F190B9DE00C6A02__CCTOR_OFFSET UNITYSDK_OFFSET(0x70E62E0)
#define CLASS_1_6F190B9DE00C6A02__CTOR_OFFSET UNITYSDK_OFFSET(0x70E4F70)

inline static constexpr unsigned int Class_1_6F190B9DE00C6A02_TypeDefinitionIndex = 41602;

class Class_1_6F190B9DE00C6A02 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F190B9DE00C6A02_TypeDefinitionIndex)->GetStaticField(0xFB40);
	}
	::Il2CppArray<::System::Int32>* Field_1_7; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_8; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_13; // 0x20
	::Il2CppArray<::System::Int32>* Field_1_9; // 0x28
	::Il2CppArray<::Class_2_CE524E0BB2F7DB94*>* Field_1_4; // 0x30
	::Il2CppArray<::System::Int32>* Field_1_10; // 0x38
	::Il2CppArray<::System::Int32>* Field_1_11; // 0x40
	::Il2CppArray<::System::Int32>* Field_1_5; // 0x48
	::Il2CppArray<::System::Int32>* Field_1_2; // 0x50
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_3; // 0x58
	::Il2CppArray<::System::Int32>* Field_1_6; // 0x60
	::Il2CppArray<::System::Int32>* Field_1_12; // 0x68
	::UnityEngine::Material* Field_1_1; // 0x70

	::System::Void _ctor(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A09E411B8D704F86(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_A09E411B8D704F86_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_1_F2EEC5E8503D3622(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_F2EEC5E8503D3622_OFFSET))(this, a1);
	}

	::System::Void Method_1_42E6F86C0B43B6D4(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_42E6F86C0B43B6D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1AAAE29F4DB571CA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_1AAAE29F4DB571CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_B25ED808FE6F3E06(::Class_2_208CC9941471731A_281* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_281*))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_B25ED808FE6F3E06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F97FF40AD1127FEA(::UnityEngine::Vector4 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_F97FF40AD1127FEA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_26BA8B1178DC2764(::System::Int32 a1, ::MoleMole::HollowPieceBlendMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_26BA8B1178DC2764_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_1_B51D7B59543052B1(::Class_1_5A6771CD0CA2718D* a1, ::UnityEngine::Vector4 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_B51D7B59543052B1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1712F69A7605204(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_B1712F69A7605204_OFFSET))(this, a1);
	}

	::System::String* Method_1_62F21BF1CB15C228()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_62F21BF1CB15C228_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94* Method_1_5F6BDF3FF43F02F0(::System::Int32 a1)
	{
		return ((::Class_2_CE524E0BB2F7DB94*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_5F6BDF3FF43F02F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_0169F0DBABDADCA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_0169F0DBABDADCA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C97FB4165BB19E1(::Class_1_5A6771CD0CA2718D* a1, ::MoleMole::HollowPieceBlendMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_6C97FB4165BB19E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C64D73F881818D6B(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_C64D73F881818D6B_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F190B9DE00C6A02_METHOD_1_E3812F04B2228A8B_OFFSET))(a1);
	}
};
