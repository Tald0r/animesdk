#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_CD3FBE690F475501;
namespace MoleMole { class MonoEffectPluginGroundLighting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EF807F379AD65D33_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA0DAF80)
#define CLASS_3_EF807F379AD65D33_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA0DB070)
#define CLASS_3_EF807F379AD65D33_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA0DB0D0)
#define CLASS_3_EF807F379AD65D33_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA0DAE20)
#define CLASS_3_EF807F379AD65D33__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0DAFE0)
#define CLASS_3_EF807F379AD65D33__CTOR_OFFSET UNITYSDK_OFFSET(0xA0DB060)

inline static constexpr unsigned int Class_3_EF807F379AD65D33_TypeDefinitionIndex = 39282;

class Class_3_EF807F379AD65D33 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0xA7; // 0x0
	::System::Collections::Generic::List_1<::Class_1_CD3FBE690F475501*>* Field_3_1; // 0x48
	::MoleMole::MonoEffectPluginGroundLighting* Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EF807F379AD65D33__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF807F379AD65D33__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF807F379AD65D33_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF807F379AD65D33_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF807F379AD65D33_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_EF807F379AD65D33* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_EF807F379AD65D33*(*)())((::PBYTE)hIl2Cpp + CLASS_3_EF807F379AD65D33_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
