#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Enum_3_082251DE59B3F291.h"
#include "unitysdk/Enum_3_C7980727AADFEEA1.h"

class AkCallbackInfo;
class AkCallbackManager_EventCallback;
class AkExternalSourceInfo;
class AkExternalSourceInfoArray;
class Class_1_43BD383C98B4C0C5_24;
class Class_1_6B6767B6B3C7A169;
class Class_1_C9DFE5EE7107C629_1;
class Class_3_9A60053C76BB6B5C;
class Class_3_A72BA6D8C1BF0087;
class Class_3_A72BA6D8C1BF0087_1;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0x9A575C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0988E2BBDE70BE12_OFFSET UNITYSDK_OFFSET(0x9A52770)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_09B765ED30BA31D1_OFFSET UNITYSDK_OFFSET(0x9A53970)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET UNITYSDK_OFFSET(0x9A57CA0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x9A54020)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1005DBE7105008A8_OFFSET UNITYSDK_OFFSET(0x9A57D70)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9A51B90)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1464B51C3E9294AF_OFFSET UNITYSDK_OFFSET(0x9A55F40)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_189A51BE393F6E26_OFFSET UNITYSDK_OFFSET(0x9A56D60)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1B5F8A5E739F654A_OFFSET UNITYSDK_OFFSET(0x9A54440)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25F260E00831A836_OFFSET UNITYSDK_OFFSET(0x9A559C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9A56F80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2776DE49AA80CEE7_OFFSET UNITYSDK_OFFSET(0x9A556A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2A084EE7A07D3DBF_OFFSET UNITYSDK_OFFSET(0x9A57F40)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2B88BF67A31C4CB2_OFFSET UNITYSDK_OFFSET(0x9A53B60)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2C6AC186CC4C01F1_OFFSET UNITYSDK_OFFSET(0x9A52360)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET UNITYSDK_OFFSET(0x9A54560)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3BC83C914F79A62D_1_OFFSET UNITYSDK_OFFSET(0x9A57130)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3BC83C914F79A62D_2_OFFSET UNITYSDK_OFFSET(0x9A56660)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3BC83C914F79A62D_OFFSET UNITYSDK_OFFSET(0x9A55CF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_49630B7C71D0ECC2_OFFSET UNITYSDK_OFFSET(0x9A53D50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET UNITYSDK_OFFSET(0x9A57000)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4FE3B96BB3BDA09C_OFFSET UNITYSDK_OFFSET(0x9A54260)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET UNITYSDK_OFFSET(0x9A534A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_613283CD405C0C49_OFFSET UNITYSDK_OFFSET(0x9A20F80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_688511A43AB96CB2_OFFSET UNITYSDK_OFFSET(0x9A577A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7399778C35E185A4_OFFSET UNITYSDK_OFFSET(0x9A567D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET UNITYSDK_OFFSET(0x9A55150)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8437E8BBD02DB5C5_OFFSET UNITYSDK_OFFSET(0x9A565D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET UNITYSDK_OFFSET(0x9A52C50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET UNITYSDK_OFFSET(0x9A540D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_95D919A3FFE39CED_OFFSET UNITYSDK_OFFSET(0x9A561E0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x9A51C90)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET UNITYSDK_OFFSET(0x9A54E50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9E47A80F5343332A_OFFSET UNITYSDK_OFFSET(0x9A54BF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0x9A57420)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6067B492CB6DE7_1_OFFSET UNITYSDK_OFFSET(0x9A575D0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6067B492CB6DE7_OFFSET UNITYSDK_OFFSET(0x9A54990)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x9A55020)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9A578A0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET UNITYSDK_OFFSET(0x9A57500)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET UNITYSDK_OFFSET(0x9A579C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET UNITYSDK_OFFSET(0x9A552C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET UNITYSDK_OFFSET(0x9A54F10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x9A567C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9A56570)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9A581F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A51B30)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET UNITYSDK_OFFSET(0x9A57C30)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET UNITYSDK_OFFSET(0x9A56FF0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET UNITYSDK_OFFSET(0x9A555F0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DADD56C3C0AD1565_OFFSET UNITYSDK_OFFSET(0x9A55E50)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DD07B16C6935381F_OFFSET UNITYSDK_OFFSET(0x9A53710)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_E07E62F5F77F82E3_1_OFFSET UNITYSDK_OFFSET(0x9A57A80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_E07E62F5F77F82E3_OFFSET UNITYSDK_OFFSET(0x9A57290)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_EC4B26C5D7221CB5_OFFSET UNITYSDK_OFFSET(0x9A53EB0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_ECA1A5215DCB1DF9_OFFSET UNITYSDK_OFFSET(0x9A560C0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4039AE41C45C32B_OFFSET UNITYSDK_OFFSET(0x9A568B0)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET UNITYSDK_OFFSET(0x9A55A80)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET UNITYSDK_OFFSET(0x9A55380)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET UNITYSDK_OFFSET(0x9A55750)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x9A57C10)
#define CLASS_2_8DE695ECCCB0EC2E_METHOD_2_FF63BF165AF8032A_OFFSET UNITYSDK_OFFSET(0x9A54B60)
#define CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A53410)
#define CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x9A51660)

inline static constexpr unsigned int Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex = 37000;

class Class_2_8DE695ECCCB0EC2E : public ::Class_1_B4BE03363BD6F2CF
{
public:
	static ::System::Comparison_1<::System::UInt32>** StaticGet_Field_2_18()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x41900);
	}
	static ::AkCallbackManager_EventCallback** StaticGet_Field_2_13()
	{
		return (::AkCallbackManager_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E_TypeDefinitionIndex)->GetStaticField(0x41908);
	}
	// static const ::System::UInt32 Field_2_0 = 0x0; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x20
	::System::Collections::Generic::Queue_1<::System::UInt32>* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x30
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_15; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>* Field_2_2; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x58
	::AkExternalSourceInfo* Field_2_11; // 0x60
	::System::Int32 Field_2_10; // 0x68
	::System::UInt32 Field_2_1; // 0x6C
	::System::Boolean Field_2_14; // 0x70
	::System::Single Field_2_16; // 0x74
	::Enum_3_C7980727AADFEEA1 Field_2_12; // 0x78
	::System::Single Field_2_17; // 0x7C

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_9823BFA3CE8B5542(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9823BFA3CE8B5542_OFFSET))(this, a1);
	}

	::System::Void Method_2_88A16EFB891FC9EE(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_88A16EFB891FC9EE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_5CFC9F367B4D1EE0(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3, ::Class_3_A72BA6D8C1BF0087* a4, ::Class_3_9A60053C76BB6B5C* a5, ::Class_3_A72BA6D8C1BF0087_1* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_5CFC9F367B4D1EE0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::UInt32 Method_2_09B765ED30BA31D1(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_09B765ED30BA31D1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_2_2B88BF67A31C4CB2(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2B88BF67A31C4CB2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::AKRESULT Method_2_EC4B26C5D7221CB5(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3, ::System::Boolean a4, ::System::UInt32 a5)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_EC4B26C5D7221CB5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_0988E2BBDE70BE12(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0988E2BBDE70BE12_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4FE3B96BB3BDA09C(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4FE3B96BB3BDA09C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2C6AC186CC4C01F1(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2C6AC186CC4C01F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B5F8A5E739F654A(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1B5F8A5E739F654A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AD6067B492CB6DE7(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6067B492CB6DE7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_FF63BF165AF8032A(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_FF63BF165AF8032A_OFFSET))(this, a1, a2);
	}

	::Class_1_6B6767B6B3C7A169* Method_2_9D07F15C45300921(::System::UInt32 a1)
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9D07F15C45300921_OFFSET))(this, a1);
	}

	::Class_1_6B6767B6B3C7A169* Method_2_C6843992E5B2B49B(::System::UInt32 a1)
	{
		return ((::Class_1_6B6767B6B3C7A169*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C6843992E5B2B49B_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7710CA4BBA303D1F(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7710CA4BBA303D1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_BAA70F0841022C48(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_D7F88AD95414EAED(::System::String* a1, ::Class_3_A72BA6D8C1BF0087* a2, ::Class_3_9A60053C76BB6B5C* a3, ::Class_3_A72BA6D8C1BF0087_1* a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_D7F88AD95414EAED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2776DE49AA80CEE7(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2776DE49AA80CEE7_OFFSET))(this, a1);
	}

	::System::Single Method_2_F4E441573F5682C4(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_25F260E00831A836(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_25F260E00831A836_OFFSET))(this, a1);
	}

	::System::Single Method_2_F4E441573F5682C4_1(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BC83C914F79A62D(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3BC83C914F79A62D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DADD56C3C0AD1565(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DADD56C3C0AD1565_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_1464B51C3E9294AF(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1464B51C3E9294AF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A564D5662A43279(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3A564D5662A43279_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_8437E8BBD02DB5C5(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_8437E8BBD02DB5C5_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_7399778C35E185A4(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_7399778C35E185A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F4039AE41C45C32B(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4039AE41C45C32B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_189A51BE393F6E26(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_189A51BE393F6E26_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_2_CCD7CE05545A362B()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CCD7CE05545A362B_OFFSET))(this);
	}

	::System::Boolean Method_2_ECA1A5215DCB1DF9(::System::UInt32 a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_ECA1A5215DCB1DF9_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_082251DE59B3F291 Method_2_4E309606BB74969D(::System::UInt32 a1)
	{
		return ((::Enum_3_082251DE59B3F291(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_4E309606BB74969D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_DD07B16C6935381F(::System::String* a1, ::UnityEngine::GameObject* a2, ::AkExternalSourceInfoArray* a3, ::Class_3_A72BA6D8C1BF0087* a4, ::Class_3_9A60053C76BB6B5C* a5, ::Class_3_A72BA6D8C1BF0087_1* a6, ::System::UInt32 a7, ::AkCallbackManager_EventCallback* a8, ::System::Int32 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::AkExternalSourceInfoArray*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_DD07B16C6935381F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_3BC83C914F79A62D_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3BC83C914F79A62D_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E07E62F5F77F82E3(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_E07E62F5F77F82E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_95D919A3FFE39CED(::Class_1_6B6767B6B3C7A169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B6767B6B3C7A169*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_95D919A3FFE39CED_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9E47A80F5343332A(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_9E47A80F5343332A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_A15EF7939F75CCED_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_49630B7C71D0ECC2(::Class_1_43BD383C98B4C0C5_24* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_49630B7C71D0ECC2_OFFSET))(this, a1);
	}

	::System::Single Method_2_BAA70F0841022C48_1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_928E49D6F3186E0D(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_928E49D6F3186E0D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>* Method_2_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6B6767B6B3C7A169*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_01C504FCECDF1A71_OFFSET))(this);
	}

	::System::UInt32 Method_2_AD6067B492CB6DE7_1(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_AD6067B492CB6DE7_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_688511A43AB96CB2(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_688511A43AB96CB2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_3BC83C914F79A62D_2(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_3BC83C914F79A62D_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_BAA70F0841022C48_2(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_BAA70F0841022C48_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_613283CD405C0C49(::System::String* a1, ::Class_3_A72BA6D8C1BF0087* a2, ::Class_3_9A60053C76BB6B5C* a3, ::Class_3_A72BA6D8C1BF0087_1* a4, ::System::UInt32 a5, ::AkCallbackManager_EventCallback* a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_613283CD405C0C49_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_E07E62F5F77F82E3_1(::System::UInt32 a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_E07E62F5F77F82E3_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_2_CAEE66B1498088FA(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CAEE66B1498088FA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0D302415DB249C57(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_0D302415DB249C57_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_2_1005DBE7105008A8(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_1005DBE7105008A8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_2A084EE7A07D3DBF(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_2A084EE7A07D3DBF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Single Method_2_F4E441573F5682C4_2(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E_METHOD_2_F4E441573F5682C4_2_OFFSET))(this, a1);
	}
};
