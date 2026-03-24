#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
namespace MoleMole { class IVideoPlayer; }
namespace System { template <typename T> class Action_1; }

#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_3D97887BD3D586D1_METHOD_1_03FBA3956D5B5BAC_OFFSET UNITYSDK_OFFSET(0x9E48CB0)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_3D97887BD3D586D1__CTOR_OFFSET UNITYSDK_OFFSET(0x9E41780)

inline static constexpr unsigned int Class_5_0B648F1F8F6AC84A_Class_1_3D97887BD3D586D1_TypeDefinitionIndex = 46156;

class Class_5_0B648F1F8F6AC84A_Class_1_3D97887BD3D586D1 : public ::System::Object
{
public:
	::Class_5_0B648F1F8F6AC84A* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::IVideoPlayer*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_3D97887BD3D586D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_03FBA3956D5B5BAC(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_3D97887BD3D586D1_METHOD_1_03FBA3956D5B5BAC_OFFSET))(this, a1);
	}
};
