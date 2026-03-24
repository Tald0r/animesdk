#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_D37B76E3ED8B42AD_Enum_3_732139B67EFFA878.h"

class Class_3_D37B76E3ED8B42AD_Class_1_EF4EAE1782CBBC05;
namespace MoleMole { class MonoEffectPluginFade; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_D37B76E3ED8B42AD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB8085A0)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0xB8088A0)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_4B788EAEF3D59BDC_OFFSET UNITYSDK_OFFSET(0xB8083A0)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_90D0DC11D34D7114_OFFSET UNITYSDK_OFFSET(0xB808480)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB808710)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0xB808770)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_EDACF3D84F32DDEF_1_OFFSET UNITYSDK_OFFSET(0xB808290)
#define CLASS_3_D37B76E3ED8B42AD_METHOD_3_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0xB808180)
#define CLASS_3_D37B76E3ED8B42AD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB807BB0)
#define CLASS_3_D37B76E3ED8B42AD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB807C80)
#define CLASS_3_D37B76E3ED8B42AD__CCTOR_OFFSET UNITYSDK_OFFSET(0xB808600)
#define CLASS_3_D37B76E3ED8B42AD__CTOR_OFFSET UNITYSDK_OFFSET(0xB808680)

inline static constexpr unsigned int Class_3_D37B76E3ED8B42AD_TypeDefinitionIndex = 65178;

class Class_3_D37B76E3ED8B42AD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_15 = 0x65; // 0x0
	::System::Collections::Generic::List_1<::Class_3_D37B76E3ED8B42AD_Class_1_EF4EAE1782CBBC05*>* Field_3_2; // 0x48
	::MoleMole::MonoEffectPluginFade* Field_3_1; // 0x50
	::UnityEngine::AnimationCurve* Field_3_9; // 0x58
	::Class_3_D37B76E3ED8B42AD_Enum_3_732139B67EFFA878 Field_3_3; // 0x60
	::System::Single Field_3_4; // 0x64
	::System::Single Field_3_8; // 0x68
	::System::Boolean Field_3_14; // 0x6C
	::System::Single Field_3_11; // 0x70
	::System::Single Field_3_12; // 0x74
	::System::Single Field_3_7; // 0x78
	::System::Single Field_3_10; // 0x7C
	::System::Boolean Field_3_5; // 0x80
	::System::Boolean Field_3_6; // 0x81
	::System::Boolean Field_3_0; // 0x82
	::System::Boolean Field_3_13; // 0x83

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_3_4B788EAEF3D59BDC()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_4B788EAEF3D59BDC_OFFSET))(this);
	}

	::System::Single Method_3_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_EDACF3D84F32DDEF_OFFSET))(this);
	}

	static ::Class_3_D37B76E3ED8B42AD* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_D37B76E3ED8B42AD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Single Method_3_EDACF3D84F32DDEF_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_EDACF3D84F32DDEF_1_OFFSET))(this);
	}

	::System::Single Method_3_90D0DC11D34D7114()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_90D0DC11D34D7114_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D37B76E3ED8B42AD_METHOD_3_128774387667156B_OFFSET))(this);
	}
};
