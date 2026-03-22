#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_2_D89CCC627A66D0AD;
class Class_4_7D91CA380C94C005;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTrainingRoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5C2B812082E67330_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9877D70)
#define CLASS_3_5C2B812082E67330_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x9877EC0)
#define CLASS_3_5C2B812082E67330_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9877E60)
#define CLASS_3_5C2B812082E67330_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x9878010)
#define CLASS_3_5C2B812082E67330_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9877CF0)
#define CLASS_3_5C2B812082E67330__CCTOR_OFFSET UNITYSDK_OFFSET(0x9877DD0)
#define CLASS_3_5C2B812082E67330__CTOR_OFFSET UNITYSDK_OFFSET(0x9877E50)

inline static constexpr unsigned int Class_3_5C2B812082E67330_TypeDefinitionIndex = 66702;

class Class_3_5C2B812082E67330 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xBC; // 0x0
	::Class_4_7D91CA380C94C005* Field_3_4; // 0x48
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_3_2; // 0x50
	::MoleMole::Battle::Entity* Field_3_1; // 0x58
	::MoleMole::Config::ConfigTrainingRoom* Field_3_0; // 0x60
	::System::Boolean Field_3_6; // 0x68
	::System::Int32 Field_3_5; // 0x6C
	::System::Double Field_3_3; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	static ::Class_3_5C2B812082E67330* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5C2B812082E67330*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5C2B812082E67330_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
