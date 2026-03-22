#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBuffIcon; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6DB015FE22A27672_METHOD_1_07880C3C85D28804_OFFSET UNITYSDK_OFFSET(0xB5387D0)
#define CLASS_1_6DB015FE22A27672_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB538920)
#define CLASS_1_6DB015FE22A27672_METHOD_1_207ECBB896CD3288_OFFSET UNITYSDK_OFFSET(0xB539930)
#define CLASS_1_6DB015FE22A27672_METHOD_1_4062D8A86C70F8E1_OFFSET UNITYSDK_OFFSET(0xB538530)
#define CLASS_1_6DB015FE22A27672_METHOD_1_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB53A480)
#define CLASS_1_6DB015FE22A27672_METHOD_1_60BAB51FAB46DBD1_OFFSET UNITYSDK_OFFSET(0xB538990)
#define CLASS_1_6DB015FE22A27672_METHOD_1_70672F5F2D582464_OFFSET UNITYSDK_OFFSET(0xB539D90)
#define CLASS_1_6DB015FE22A27672_METHOD_1_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0xB5375E0)
#define CLASS_1_6DB015FE22A27672_METHOD_1_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0xB537B60)
#define CLASS_1_6DB015FE22A27672_METHOD_1_85DF2213F1DDFB89_OFFSET UNITYSDK_OFFSET(0xB5371C0)
#define CLASS_1_6DB015FE22A27672_METHOD_1_89789DF79AD6057A_OFFSET UNITYSDK_OFFSET(0xB537750)
#define CLASS_1_6DB015FE22A27672_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0xB53A240)
#define CLASS_1_6DB015FE22A27672_METHOD_1_98D6C8F7FC5FBE5B_OFFSET UNITYSDK_OFFSET(0xB53AA80)
#define CLASS_1_6DB015FE22A27672_METHOD_1_A92A3F5FD912C9BD_OFFSET UNITYSDK_OFFSET(0xB539F30)
#define CLASS_1_6DB015FE22A27672_METHOD_1_A9AC902639EA0F61_OFFSET UNITYSDK_OFFSET(0xB538650)
#define CLASS_1_6DB015FE22A27672_METHOD_1_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xB53A690)
#define CLASS_1_6DB015FE22A27672_METHOD_1_C5F5A93C6216CAE8_OFFSET UNITYSDK_OFFSET(0xB538A20)
#define CLASS_1_6DB015FE22A27672_METHOD_1_CA344D8697F37321_OFFSET UNITYSDK_OFFSET(0xB537960)
#define CLASS_1_6DB015FE22A27672_METHOD_1_CE769597FEAF6406_OFFSET UNITYSDK_OFFSET(0xB538C00)
#define CLASS_1_6DB015FE22A27672_METHOD_1_DE4B9BEC257B0ADF_OFFSET UNITYSDK_OFFSET(0xB536AE0)
#define CLASS_1_6DB015FE22A27672_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB53A670)
#define CLASS_1_6DB015FE22A27672_METHOD_1_FF2DC239037C26A2_OFFSET UNITYSDK_OFFSET(0xB537020)
#define CLASS_1_6DB015FE22A27672__CTOR_OFFSET UNITYSDK_OFFSET(0xB5368B0)

inline static constexpr unsigned int Class_1_6DB015FE22A27672_TypeDefinitionIndex = 55074;

class Class_1_6DB015FE22A27672 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	::UnityEngine::Transform* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* Field_1_5; // 0x18
	::UnityEngine::Transform* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::MonoBuffIcon*>* Field_1_8; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>*>* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::MoleMole::MonoBuffIcon*>*>*>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x48
	::System::UInt32 Field_1_1; // 0x50
	::System::Boolean Field_1_4; // 0x54

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DE4B9BEC257B0ADF(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_DE4B9BEC257B0ADF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A9AC902639EA0F61(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_A9AC902639EA0F61_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_07880C3C85D28804(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_07880C3C85D28804_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_60BAB51FAB46DBD1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_60BAB51FAB46DBD1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5F5A93C6216CAE8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_C5F5A93C6216CAE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE769597FEAF6406(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_CE769597FEAF6406_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_89789DF79AD6057A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_89789DF79AD6057A_OFFSET))(this, a1);
	}

	::MoleMole::MonoBuffIcon* Method_1_FF2DC239037C26A2(::System::Int32 a1)
	{
		return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_FF2DC239037C26A2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_85DF2213F1DDFB89(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_85DF2213F1DDFB89_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::MonoBuffIcon* Method_1_207ECBB896CD3288(::System::Int32 a1, ::System::Boolean& a2)
	{
		return ((::MoleMole::MonoBuffIcon*(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_207ECBB896CD3288_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA344D8697F37321(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_CA344D8697F37321_OFFSET))(this, a1);
	}

	::System::Void Method_1_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_81FEFD1B22CE37A2_OFFSET))(this);
	}

	::System::Int32 Method_1_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_814B2B0F621DA493_OFFSET))(this);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}

	::System::Void Method_1_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_1_A92A3F5FD912C9BD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_A92A3F5FD912C9BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70672F5F2D582464(::System::Int32 a1, ::MoleMole::MonoBuffIcon* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::MonoBuffIcon*))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_70672F5F2D582464_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_98D6C8F7FC5FBE5B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_98D6C8F7FC5FBE5B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4062D8A86C70F8E1(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DB015FE22A27672_METHOD_1_4062D8A86C70F8E1_OFFSET))(this, a1);
	}
};
