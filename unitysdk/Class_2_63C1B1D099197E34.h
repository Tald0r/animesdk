#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

class Class_3_025FF4981524A424_311;
class Class_3_025FF4981524A424_52;
class Class_3_48A3D3A34C52331D_45;
class Class_3_F402EAE70F3E0E28;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_63C1B1D099197E34_METHOD_2_01630A2C27A92C70_OFFSET UNITYSDK_OFFSET(0x6D5F790)
#define CLASS_2_63C1B1D099197E34_METHOD_2_7DE8D29A635A488A_OFFSET UNITYSDK_OFFSET(0x6D5F5D0)
#define CLASS_2_63C1B1D099197E34_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6D5F340)
#define CLASS_2_63C1B1D099197E34_METHOD_2_CFD66008226ADAC6_OFFSET UNITYSDK_OFFSET(0x6D5F3B0)
#define CLASS_2_63C1B1D099197E34_ONSTART_OFFSET UNITYSDK_OFFSET(0x6D5F2E0)
#define CLASS_2_63C1B1D099197E34__CTOR_OFFSET UNITYSDK_OFFSET(0x6D5F3A0)

inline static constexpr unsigned int Class_2_63C1B1D099197E34_TypeDefinitionIndex = 80721;

class Class_2_63C1B1D099197E34 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CFD66008226ADAC6(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_3_F402EAE70F3E0E28*>* a2, ::System::Action_1<::Class_3_025FF4981524A424_52*>* a3, ::System::Action_1<::Class_3_025FF4981524A424_52*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_3_F402EAE70F3E0E28*>*, ::System::Action_1<::Class_3_025FF4981524A424_52*>*, ::System::Action_1<::Class_3_025FF4981524A424_52*>*))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_CFD66008226ADAC6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7DE8D29A635A488A(::System::Int32 a1, ::System::Action_1<::Class_3_48A3D3A34C52331D_45*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_3_48A3D3A34C52331D_45*>*))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_7DE8D29A635A488A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_01630A2C27A92C70(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::Class_3_025FF4981524A424_311*>* a3, ::System::Action_1<::Class_3_025FF4981524A424_311*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::Class_3_025FF4981524A424_311*>*, ::System::Action_1<::Class_3_025FF4981524A424_311*>*))((::PBYTE)hIl2Cpp + CLASS_2_63C1B1D099197E34_METHOD_2_01630A2C27A92C70_OFFSET))(this, a1, a2, a3, a4);
	}
};
