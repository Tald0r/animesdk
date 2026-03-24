#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_6C2316E239372B31;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D7F0FB122869A3C1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xACA1490)
#define CLASS_2_D7F0FB122869A3C1_FROMFLX_OFFSET UNITYSDK_OFFSET(0xACA0C30)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0xACA0CB0)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xACA1CB0)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_2D8111E2FEBA9337_OFFSET UNITYSDK_OFFSET(0xACA1B30)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0xACA0980)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0xACA1B20)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xACA0B00)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xACA1B50)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xACA0A00)
#define CLASS_2_D7F0FB122869A3C1_METHOD_2_DF5526BA6D1A4902_OFFSET UNITYSDK_OFFSET(0xACA14F0)
#define CLASS_2_D7F0FB122869A3C1__CTOR_OFFSET UNITYSDK_OFFSET(0xACA1B40)

inline static constexpr unsigned int Class_2_D7F0FB122869A3C1_TypeDefinitionIndex = 74009;

class Class_2_D7F0FB122869A3C1 : public ::Class_1_2AD981AB6ACE5E06_1
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x20
	::Il2CppArray<::Class_1_6C2316E239372B31*>* Field_2_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::System::Int32 Field_2_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_1* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_2_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_6C2316E239372B31*>* Method_2_2D8111E2FEBA9337()
	{
		return ((::Il2CppArray<::Class_1_6C2316E239372B31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_2D8111E2FEBA9337_OFFSET))(this);
	}

	::System::Boolean Method_2_DF5526BA6D1A4902(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_DF5526BA6D1A4902_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D7F0FB122869A3C1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_D7F0FB122869A3C1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_D7F0FB122869A3C1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_D7F0FB122869A3C1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_D7F0FB122869A3C1_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}
};
