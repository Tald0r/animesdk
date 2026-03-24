#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_AE77556F8299A979_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB495D30)
#define CLASS_2_AE77556F8299A979_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB495960)
#define CLASS_2_AE77556F8299A979_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xB4961E0)
#define CLASS_2_AE77556F8299A979_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xB4959E0)
#define CLASS_2_AE77556F8299A979_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xB495830)
#define CLASS_2_AE77556F8299A979_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xB496080)
#define CLASS_2_AE77556F8299A979_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xB4956E0)
#define CLASS_2_AE77556F8299A979_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xB495730)
#define CLASS_2_AE77556F8299A979_METHOD_2_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0xB495D90)
#define CLASS_2_AE77556F8299A979__CTOR_OFFSET UNITYSDK_OFFSET(0xB496070)

inline static constexpr unsigned int Class_2_AE77556F8299A979_TypeDefinitionIndex = 43045;

class Class_2_AE77556F8299A979 : public ::Class_1_2AD981AB6ACE5E06
{
public:
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_E0AC97338167133E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_2_AE77556F8299A979* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_AE77556F8299A979*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_AE77556F8299A979* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_AE77556F8299A979*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AE77556F8299A979_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
