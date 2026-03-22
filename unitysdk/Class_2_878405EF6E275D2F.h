#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4252C4B7F9BB7BE7.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_2_878405EF6E275D2F_METHOD_2_6DE654418A6505DB_OFFSET UNITYSDK_OFFSET(0x8CAE760)
#define CLASS_2_878405EF6E275D2F_METHOD_2_813D2C93BFE6E56D_OFFSET UNITYSDK_OFFSET(0x8CAE870)
#define CLASS_2_878405EF6E275D2F_METHOD_2_C027CF3DBDF58558_OFFSET UNITYSDK_OFFSET(0x8CAE270)
#define CLASS_2_878405EF6E275D2F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8CAE810)
#define CLASS_2_878405EF6E275D2F_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x8CADF10)
#define CLASS_2_878405EF6E275D2F__CTOR_OFFSET UNITYSDK_OFFSET(0x8CAE720)

inline static constexpr unsigned int Class_2_878405EF6E275D2F_TypeDefinitionIndex = 73702;

class Class_2_878405EF6E275D2F : public ::Class_1_4252C4B7F9BB7BE7
{
public:
	::System::String* Field_2_0; // 0x38
	::System::String* Field_2_1; // 0x40
	::Enum_3_B90C1A15EA6E3C2B Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878405EF6E275D2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878405EF6E275D2F_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_C027CF3DBDF58558()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878405EF6E275D2F_METHOD_2_C027CF3DBDF58558_OFFSET))(this);
	}

	::System::Void Method_2_6DE654418A6505DB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_878405EF6E275D2F_METHOD_2_6DE654418A6505DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878405EF6E275D2F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_813D2C93BFE6E56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_878405EF6E275D2F_METHOD_2_813D2C93BFE6E56D_OFFSET))(this, a1);
	}
};
