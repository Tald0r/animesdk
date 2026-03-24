#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_CE3538232762A08C;
namespace System { class String; }

#define CLASS_2_ECEDCDA15FCD7E9C_CLASS_1_F776FD0ED44E6194_METHOD_1_10B863FA4CCD602D_OFFSET UNITYSDK_OFFSET(0x1B49A840)
#define CLASS_2_ECEDCDA15FCD7E9C_CLASS_1_F776FD0ED44E6194__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49A830)

inline static constexpr unsigned int Class_2_ECEDCDA15FCD7E9C_Class_1_F776FD0ED44E6194_TypeDefinitionIndex = 25854;

class Class_2_ECEDCDA15FCD7E9C_Class_1_F776FD0ED44E6194 : public ::System::Object
{
public:
	::Class_1_CE3538232762A08C* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECEDCDA15FCD7E9C_CLASS_1_F776FD0ED44E6194__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_10B863FA4CCD602D(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_CE3538232762A08C*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Class_1_CE3538232762A08C*>))((::PBYTE)hIl2Cpp + CLASS_2_ECEDCDA15FCD7E9C_CLASS_1_F776FD0ED44E6194_METHOD_1_10B863FA4CCD602D_OFFSET))(this, a1);
	}
};
