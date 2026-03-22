#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_9B26FD6E60702A08_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x9587990)
#define CLASS_3_9B26FD6E60702A08_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9587E50)
#define CLASS_3_9B26FD6E60702A08_METHOD_3_D50C3D457922587F_OFFSET UNITYSDK_OFFSET(0x9587BF0)
#define CLASS_3_9B26FD6E60702A08__CTOR_OFFSET UNITYSDK_OFFSET(0x9587CF0)

inline static constexpr unsigned int Class_3_9B26FD6E60702A08_TypeDefinitionIndex = 64254;

class Class_3_9B26FD6E60702A08 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B26FD6E60702A08__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B26FD6E60702A08_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_D50C3D457922587F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_9B26FD6E60702A08_METHOD_3_D50C3D457922587F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B26FD6E60702A08_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
