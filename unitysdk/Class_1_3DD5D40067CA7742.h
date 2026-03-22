#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/Struct_2_B109854B9B06ED56.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_219;
class Class_2_89D7FAFCE6B7DF8D;

#define CLASS_1_3DD5D40067CA7742_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0x1664B400)
#define CLASS_1_3DD5D40067CA7742_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1664B450)
#define CLASS_1_3DD5D40067CA7742__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1664B300)
#define CLASS_1_3DD5D40067CA7742__CTOR_OFFSET UNITYSDK_OFFSET(0x1664B240)

inline static constexpr unsigned int Class_1_3DD5D40067CA7742_TypeDefinitionIndex = 70546;

class Class_1_3DD5D40067CA7742 : public ::System::Object
{
public:
	::Class_2_89D7FAFCE6B7DF8D* Field_1_1; // 0x10
	::Struct_2_B109854B9B06ED56 Field_1_0; // 0x18
	::MoleMole::SocialPostSizeType Field_1_2; // 0x20

	::System::Void _ctor(::Struct_2_B109854B9B06ED56 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B109854B9B06ED56))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Struct_2_B109854B9B06ED56 a1, ::Class_2_89D7FAFCE6B7DF8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B109854B9B06ED56, ::Class_2_89D7FAFCE6B7DF8D*))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_219* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_219*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::Struct_2_B109854B9B06ED56 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_B109854B9B06ED56(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD5D40067CA7742_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}
};
