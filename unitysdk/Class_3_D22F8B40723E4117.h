#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_D22F8B40723E4117_METHOD_3_047277627992B8D2_OFFSET UNITYSDK_OFFSET(0x9C4D5A0)
#define CLASS_3_D22F8B40723E4117_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9C4D450)
#define CLASS_3_D22F8B40723E4117_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C4DA40)
#define CLASS_3_D22F8B40723E4117__CTOR_OFFSET UNITYSDK_OFFSET(0x9C4D950)

inline static constexpr unsigned int Class_3_D22F8B40723E4117_TypeDefinitionIndex = 45925;

class Class_3_D22F8B40723E4117 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_0; // 0x18
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D22F8B40723E4117__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D22F8B40723E4117_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_047277627992B8D2(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_D22F8B40723E4117_METHOD_3_047277627992B8D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D22F8B40723E4117_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
