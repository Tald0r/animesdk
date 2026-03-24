#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2;
namespace MoleMole { class UIInterKnotForumLevelRowWidgetController_Data; }
namespace System::Collections { class IEnumerable; }
template <typename T> class Class_0_16E4307DCC419505_125;

#define CLASS_2_8781B3D6249E89D1_METHOD_2_55A2D7889F07519C_OFFSET UNITYSDK_OFFSET(0x82437F0)
#define CLASS_2_8781B3D6249E89D1_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x82431B0)
#define CLASS_2_8781B3D6249E89D1_METHOD_2_C2B92FA28D9008B4_OFFSET UNITYSDK_OFFSET(0x8242D10)
#define CLASS_2_8781B3D6249E89D1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8243790)
#define CLASS_2_8781B3D6249E89D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8243740)

inline static constexpr unsigned int Class_2_8781B3D6249E89D1_TypeDefinitionIndex = 49679;

class Class_2_8781B3D6249E89D1 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x50
	::Class_0_16E4307DCC419505_125<::MoleMole::UIInterKnotForumLevelRowWidgetController_Data*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8781B3D6249E89D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C2B92FA28D9008B4(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8781B3D6249E89D1_METHOD_2_C2B92FA28D9008B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8781B3D6249E89D1_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8781B3D6249E89D1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_55A2D7889F07519C()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8781B3D6249E89D1_METHOD_2_55A2D7889F07519C_OFFSET))(this);
	}
};
