#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_64CBFBC4661A6362_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x82915F0)
#define CLASS_3_64CBFBC4661A6362_METHOD_3_4E72D2593CB19187_OFFSET UNITYSDK_OFFSET(0x8291850)
#define CLASS_3_64CBFBC4661A6362_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8291E40)
#define CLASS_3_64CBFBC4661A6362__CTOR_OFFSET UNITYSDK_OFFSET(0x8291CE0)

inline static constexpr unsigned int Class_3_64CBFBC4661A6362_TypeDefinitionIndex = 65452;

class Class_3_64CBFBC4661A6362 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x28
	::Class_4_179456445C225AB4<::System::Boolean>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CBFBC4661A6362__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CBFBC4661A6362_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_4E72D2593CB19187(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_64CBFBC4661A6362_METHOD_3_4E72D2593CB19187_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64CBFBC4661A6362_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
