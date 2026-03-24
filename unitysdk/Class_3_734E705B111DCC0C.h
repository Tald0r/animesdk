#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class TgsPvLegIkController; }
namespace RootMotion { class SolverManager_PostLateUpdateDelegate; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class Grounder_GrounderDelegate; }
namespace RootMotion::FinalIK { class LegIK; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_734E705B111DCC0C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xCEBA4B0)
#define CLASS_3_734E705B111DCC0C_METHOD_3_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0xCEBB9C0)
#define CLASS_3_734E705B111DCC0C_METHOD_3_676314BE1F45AAC3_OFFSET UNITYSDK_OFFSET(0xCEBA5F0)
#define CLASS_3_734E705B111DCC0C_METHOD_3_97285E397E8F5091_OFFSET UNITYSDK_OFFSET(0xCEBB060)
#define CLASS_3_734E705B111DCC0C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCEBB1A0)
#define CLASS_3_734E705B111DCC0C_METHOD_3_AA1770D3C5A6A84B_OFFSET UNITYSDK_OFFSET(0xCEBA7B0)
#define CLASS_3_734E705B111DCC0C_METHOD_3_B854C3DB0DB67745_OFFSET UNITYSDK_OFFSET(0xCEBB200)
#define CLASS_3_734E705B111DCC0C_METHOD_3_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0xCEBAE40)
#define CLASS_3_734E705B111DCC0C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xCEBA270)
#define CLASS_3_734E705B111DCC0C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEBA510)
#define CLASS_3_734E705B111DCC0C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEBA5A0)

inline static constexpr unsigned int Class_3_734E705B111DCC0C_TypeDefinitionIndex = 44885;

class Class_3_734E705B111DCC0C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Single* StaticGet_Field_3_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_734E705B111DCC0C_TypeDefinitionIndex)->GetStaticField(0x11170);
	}
	// static const ::System::Int32 Field_3_12 = 0x19; // 0x0
	::RootMotion::FinalIK::Grounder_GrounderDelegate* Field_3_10; // 0x48
	::System::Action* Field_3_7; // 0x50
	::RootMotion::SolverManager_PostLateUpdateDelegate* Field_3_11; // 0x58
	::MoleMole::TgsPvLegIkController* Field_3_3; // 0x60
	::Il2CppArray<::System::Boolean>* Field_3_0; // 0x68
	::RootMotion::FinalIK::GrounderIK* Field_3_4; // 0x70
	::System::Collections::Generic::List_1<::System::Boolean>* Field_3_8; // 0x78
	::System::Action* Field_3_6; // 0x80
	::Il2CppArray<::RootMotion::FinalIK::LegIK*>* Field_3_5; // 0x88
	::System::Int32 Field_3_2; // 0x90
	::System::Single Field_3_1; // 0x94

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_676314BE1F45AAC3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_676314BE1F45AAC3_OFFSET))(this);
	}

	::System::Single Method_3_AA1770D3C5A6A84B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_AA1770D3C5A6A84B_OFFSET))(this);
	}

	::System::Boolean Method_3_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_D58849E1895DD394_OFFSET))(this);
	}

	::System::Boolean Method_3_97285E397E8F5091()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_97285E397E8F5091_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_B854C3DB0DB67745()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_B854C3DB0DB67745_OFFSET))(this);
	}

	static ::Class_3_734E705B111DCC0C* Method_3_4AA7827CFB505DDD()
	{
		return ((::Class_3_734E705B111DCC0C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_734E705B111DCC0C_METHOD_3_4AA7827CFB505DDD_OFFSET))();
	}
};
