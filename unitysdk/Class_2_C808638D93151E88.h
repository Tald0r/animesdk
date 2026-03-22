#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfo;
class Class_1_C9DFE5EE7107C629_1;
class Class_1_E9B3FDEEC6142CB3;
class Class_3_9A60053C76BB6B5C;
class Class_3_A72BA6D8C1BF0087;
class Class_3_A72BA6D8C1BF0087_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C808638D93151E88_METHOD_2_22729DDA46DDC91F_OFFSET UNITYSDK_OFFSET(0xB7A7560)
#define CLASS_2_C808638D93151E88_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB7A7630)
#define CLASS_2_C808638D93151E88_METHOD_2_27EBAAFAF5369197_OFFSET UNITYSDK_OFFSET(0xB7A8590)
#define CLASS_2_C808638D93151E88_METHOD_2_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0xB7A7BD0)
#define CLASS_2_C808638D93151E88_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB7A72E0)
#define CLASS_2_C808638D93151E88_METHOD_2_49A25C8C0AAE5B74_OFFSET UNITYSDK_OFFSET(0xB7A7E80)
#define CLASS_2_C808638D93151E88_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xB7A8580)
#define CLASS_2_C808638D93151E88_METHOD_2_5C4AD3D20087FDE7_OFFSET UNITYSDK_OFFSET(0xB7A76A0)
#define CLASS_2_C808638D93151E88_METHOD_2_73212BE283E8719D_OFFSET UNITYSDK_OFFSET(0xB7A7D50)
#define CLASS_2_C808638D93151E88_METHOD_2_73440DD2390F07BB_OFFSET UNITYSDK_OFFSET(0xB7A8110)
#define CLASS_2_C808638D93151E88_METHOD_2_76A43993BBD532DD_OFFSET UNITYSDK_OFFSET(0xB7A7830)
#define CLASS_2_C808638D93151E88_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0xB7A8920)
#define CLASS_2_C808638D93151E88_METHOD_2_9F6548248BE72C1E_OFFSET UNITYSDK_OFFSET(0xB7A8780)
#define CLASS_2_C808638D93151E88_METHOD_2_AA97651775D71DD5_OFFSET UNITYSDK_OFFSET(0xB7A6A80)
#define CLASS_2_C808638D93151E88_METHOD_2_B1B448B2EC103605_OFFSET UNITYSDK_OFFSET(0xB7A8B30)
#define CLASS_2_C808638D93151E88_METHOD_2_BA4F5A3623915D8E_OFFSET UNITYSDK_OFFSET(0xB7A8650)
#define CLASS_2_C808638D93151E88_METHOD_2_BE0579C19F0518CC_OFFSET UNITYSDK_OFFSET(0xB7A7B10)
#define CLASS_2_C808638D93151E88_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xB7A8910)
#define CLASS_2_C808638D93151E88_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7A7AB0)
#define CLASS_2_C808638D93151E88_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB7A79C0)
#define CLASS_2_C808638D93151E88_METHOD_2_DAB65F30E4454DBE_OFFSET UNITYSDK_OFFSET(0xB7A7C90)
#define CLASS_2_C808638D93151E88_METHOD_2_DCEB9B8FD296459A_OFFSET UNITYSDK_OFFSET(0xB7A6570)
#define CLASS_2_C808638D93151E88_METHOD_2_E3ED34A23CEEFD04_OFFSET UNITYSDK_OFFSET(0xB7A7420)
#define CLASS_2_C808638D93151E88_METHOD_2_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0xB7A89C0)
#define CLASS_2_C808638D93151E88_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xB7A7620)
#define CLASS_2_C808638D93151E88_METHOD_2_ECAB7B4F243C67E7_OFFSET UNITYSDK_OFFSET(0xB7A83F0)
#define CLASS_2_C808638D93151E88_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB7A7AA0)
#define CLASS_2_C808638D93151E88__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A5FF0)

inline static constexpr unsigned int Class_2_C808638D93151E88_TypeDefinitionIndex = 75511;

class Class_2_C808638D93151E88 : public ::Class_1_B4BE03363BD6F2CF
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E9B3FDEEC6142CB3*>* Field_2_10; // 0x28
	::System::Collections::Generic::Queue_1<::System::String*>* Field_2_8; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x38
	::AkExternalSourceInfo* Field_2_7; // 0x40
	::System::Single Field_2_1; // 0x48
	::System::Boolean Field_2_0; // 0x4C
	::System::Single Field_2_2; // 0x50
	::System::UInt32 Field_2_9; // 0x54
	::System::Single Field_2_3; // 0x58

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCEB9B8FD296459A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_DCEB9B8FD296459A_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::UInt32 Method_2_E3ED34A23CEEFD04(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_E3ED34A23CEEFD04_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5C4AD3D20087FDE7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_5C4AD3D20087FDE7_OFFSET))(this);
	}

	::System::Boolean Method_2_76A43993BBD532DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_76A43993BBD532DD_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_BE0579C19F0518CC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_BE0579C19F0518CC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DAB65F30E4454DBE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_DAB65F30E4454DBE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_49A25C8C0AAE5B74(::System::Collections::Generic::List_1<::System::String*>* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_49A25C8C0AAE5B74_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::UInt32 Method_2_73440DD2390F07BB(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_73440DD2390F07BB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::String* Method_2_ECAB7B4F243C67E7(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_ECAB7B4F243C67E7_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Int32 Method_2_27EBAAFAF5369197(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_27EBAAFAF5369197_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_AA97651775D71DD5(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_A72BA6D8C1BF0087* a3, ::Class_3_9A60053C76BB6B5C* a4, ::Class_3_A72BA6D8C1BF0087_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::System::String* a9, ::System::Boolean a10)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_A72BA6D8C1BF0087*, ::Class_3_9A60053C76BB6B5C*, ::Class_3_A72BA6D8C1BF0087_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_AA97651775D71DD5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::String* Method_2_9F6548248BE72C1E(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_9F6548248BE72C1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_E67FA6A042436B76_OFFSET))(this);
	}

	::System::Int32 Method_2_BA4F5A3623915D8E(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_BA4F5A3623915D8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_73212BE283E8719D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_73212BE283E8719D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_22729DDA46DDC91F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_22729DDA46DDC91F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1B448B2EC103605(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C808638D93151E88_METHOD_2_B1B448B2EC103605_OFFSET))(this, a1);
	}
};
