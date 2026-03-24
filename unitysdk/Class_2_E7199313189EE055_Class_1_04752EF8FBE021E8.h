#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E7199313189EE055;
class Class_3_32CD58E95ADFF8F5_28;
class Class_3_7E6E8DD3EAC12A67_18;
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPageController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8_METHOD_1_44C74197B1D1278B_OFFSET UNITYSDK_OFFSET(0xE0E3440)
#define CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8_METHOD_1_53A0A4AE06760C66_OFFSET UNITYSDK_OFFSET(0xE0E36E0)
#define CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8_METHOD_1_FBAF30DDB1F77EE3_OFFSET UNITYSDK_OFFSET(0xE0E2E60)
#define CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D8120)

inline static constexpr unsigned int Class_2_E7199313189EE055_Class_1_04752EF8FBE021E8_TypeDefinitionIndex = 76203;

class Class_2_E7199313189EE055_Class_1_04752EF8FBE021E8 : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapPageController* Field_1_4; // 0x10
	::MoleMole::UIUrbanMapPageContext* Field_1_5; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_1_7; // 0x28
	::System::Action_1<::Class_3_7E6E8DD3EAC12A67_18*>* Field_1_6; // 0x30
	::Class_2_E7199313189EE055* Field_1_0; // 0x38
	::System::UInt32 Field_1_1; // 0x40
	::System::Boolean Field_1_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FBAF30DDB1F77EE3(::Class_3_32CD58E95ADFF8F5_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_28*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8_METHOD_1_FBAF30DDB1F77EE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_44C74197B1D1278B(::Class_3_7E6E8DD3EAC12A67_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_18*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8_METHOD_1_44C74197B1D1278B_OFFSET))(this, a1);
	}

	::System::Void Method_1_53A0A4AE06760C66(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_04752EF8FBE021E8_METHOD_1_53A0A4AE06760C66_OFFSET))(this, a1, a2);
	}
};
