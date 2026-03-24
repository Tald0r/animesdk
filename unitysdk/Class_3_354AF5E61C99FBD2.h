#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"
#include "unitysdk/Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7.h"
#include "unitysdk/Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8.h"
#include "unitysdk/Class_3_354AF5E61C99FBD2_Struct_2_8FA3148BBF6A5F8F.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Enum_3_BB0E1DD4C880324C.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_09C6D749A1B6BB3E;
class Class_3_757A5862D4BBEE41_1;
class Class_3_AF7A56E03A4D3952;
class Class_3_F35B080B137ECC46;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_354AF5E61C99FBD2_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7B4C760)
#define CLASS_3_354AF5E61C99FBD2_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x7B4CCB0)
#define CLASS_3_354AF5E61C99FBD2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x7B4CB30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_00DB3E7FFAAD6B4B_OFFSET UNITYSDK_OFFSET(0x7B53110)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_1_OFFSET UNITYSDK_OFFSET(0x7B56BA0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_OFFSET UNITYSDK_OFFSET(0x7B4DFB0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_0671A658DD7403FF_OFFSET UNITYSDK_OFFSET(0x7B56580)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_108FD16DABAA831D_OFFSET UNITYSDK_OFFSET(0x7B4E710)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_11413FF82B6C017C_OFFSET UNITYSDK_OFFSET(0x7B53810)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1AEC377D9EB72CDB_OFFSET UNITYSDK_OFFSET(0x7B52C10)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1BDCE7278D1CBE6C_OFFSET UNITYSDK_OFFSET(0x7B57820)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1CF271E72B7BD354_OFFSET UNITYSDK_OFFSET(0x7B525D0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1D45AE07B132A82D_OFFSET UNITYSDK_OFFSET(0x7B5A130)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_1FE88D8CC1F46550_OFFSET UNITYSDK_OFFSET(0x7B59390)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_30F3B0C2650AA484_OFFSET UNITYSDK_OFFSET(0x7B52E80)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_338B0A3B37AE4517_OFFSET UNITYSDK_OFFSET(0x7B522A0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_36E38788CF2F85FD_OFFSET UNITYSDK_OFFSET(0x7B4F020)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_46B98E3BEE918F5B_OFFSET UNITYSDK_OFFSET(0x7B529A0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_4D732BAD9E6CED82_OFFSET UNITYSDK_OFFSET(0x7B599C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5002EF5B1187AC44_OFFSET UNITYSDK_OFFSET(0x7B57FB0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_500BDD1E218E20AB_OFFSET UNITYSDK_OFFSET(0x7B51990)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_52510BD88B41746B_OFFSET UNITYSDK_OFFSET(0x7B4E160)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5288AE7839DAE123_OFFSET UNITYSDK_OFFSET(0x7B586D0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5D50EC58131768DD_OFFSET UNITYSDK_OFFSET(0x7B55520)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_5EB8FB5EC9256F6E_OFFSET UNITYSDK_OFFSET(0x7B547A0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_63E4D7363C6B4DFD_OFFSET UNITYSDK_OFFSET(0x7B542C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_67804CB1798E1904_OFFSET UNITYSDK_OFFSET(0x7B56FF0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_68B65F501E928486_OFFSET UNITYSDK_OFFSET(0x7B55720)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_6AFD4F472B6E21B5_OFFSET UNITYSDK_OFFSET(0x7B52710)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_1_OFFSET UNITYSDK_OFFSET(0x7B56F80)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_2_OFFSET UNITYSDK_OFFSET(0x7B588F0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x7B4D010)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_73B0F8D29959C559_OFFSET UNITYSDK_OFFSET(0x7B4D910)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_73FDEFF1E5C241FD_OFFSET UNITYSDK_OFFSET(0x7B509D0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_780C3CDFCABAB0B0_OFFSET UNITYSDK_OFFSET(0x7B53260)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_791FD55374F4DAB8_OFFSET UNITYSDK_OFFSET(0x7B590B0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7B567A313F02355E_OFFSET UNITYSDK_OFFSET(0x7B51AF0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7C751ADAC66DDA47_OFFSET UNITYSDK_OFFSET(0x7B4D0B0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7D7BC785751818CE_OFFSET UNITYSDK_OFFSET(0x7B4D460)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_7DFE9E46521F3AF1_OFFSET UNITYSDK_OFFSET(0x7B59DC0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_84E4D65DFC681E1D_OFFSET UNITYSDK_OFFSET(0x7B55FE0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_8697AF5AB7984C07_OFFSET UNITYSDK_OFFSET(0x7B54580)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_90889A6A6929E4BE_OFFSET UNITYSDK_OFFSET(0x7B4FD30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_9D346EBF814CBA7D_OFFSET UNITYSDK_OFFSET(0x7B58250)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_1_OFFSET UNITYSDK_OFFSET(0x7B56D50)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_OFFSET UNITYSDK_OFFSET(0x7B52DA0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_A2D280FF02726EC0_OFFSET UNITYSDK_OFFSET(0x7B508D0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_A34FAD7A3FD7AD04_OFFSET UNITYSDK_OFFSET(0x7B59830)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_A49C1E5D23185067_OFFSET UNITYSDK_OFFSET(0x7B4EBC0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_A5B82E463C984010_OFFSET UNITYSDK_OFFSET(0x7B54C90)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_ACB38D2084B08FEA_OFFSET UNITYSDK_OFFSET(0x7B57940)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_AD17DF370DE96AE8_OFFSET UNITYSDK_OFFSET(0x7B54210)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_B80E5B92A3FC2B8A_OFFSET UNITYSDK_OFFSET(0x7B55C00)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_BA4D8AC6C8F5E98C_OFFSET UNITYSDK_OFFSET(0x7B54F30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x7B58340)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_BF720E08C4EFDE67_OFFSET UNITYSDK_OFFSET(0x7B59E40)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_C7936F11B6D8251A_OFFSET UNITYSDK_OFFSET(0x7B56740)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x7B556C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x7B58670)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7B54E30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CA4F1F20069C4F17_OFFSET UNITYSDK_OFFSET(0x7B53D80)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_CC943AA70AE776C1_OFFSET UNITYSDK_OFFSET(0x7B54890)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_D0EC10BACB5DC7D3_OFFSET UNITYSDK_OFFSET(0x7B54E90)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_D45FB0070F323FE9_OFFSET UNITYSDK_OFFSET(0x7B4E2C0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E04CA61664E84865_OFFSET UNITYSDK_OFFSET(0x7B58970)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E33F53EB083F6486_OFFSET UNITYSDK_OFFSET(0x7B4EF20)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E45785348CC14D7F_OFFSET UNITYSDK_OFFSET(0x7B52850)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E6B460C245905F64_OFFSET UNITYSDK_OFFSET(0x7B4F610)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_1_OFFSET UNITYSDK_OFFSET(0x7B583B0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_OFFSET UNITYSDK_OFFSET(0x7B57CF0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_EABB948D2A6D5800_OFFSET UNITYSDK_OFFSET(0x7B53EF0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_EC1F4F514DABA5AD_OFFSET UNITYSDK_OFFSET(0x7B55DA0)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_F97BA222C6BA7F7D_OFFSET UNITYSDK_OFFSET(0x7B56E30)
#define CLASS_3_354AF5E61C99FBD2_METHOD_3_FCDDE4251AB3AA45_OFFSET UNITYSDK_OFFSET(0x7B55010)
#define CLASS_3_354AF5E61C99FBD2_UPDATE_OFFSET UNITYSDK_OFFSET(0x7B4CE30)
#define CLASS_3_354AF5E61C99FBD2__CCTOR_OFFSET UNITYSDK_OFFSET(0x7B4CFD0)
#define CLASS_3_354AF5E61C99FBD2__CTOR_OFFSET UNITYSDK_OFFSET(0x7B4CFB0)

inline static constexpr unsigned int Class_3_354AF5E61C99FBD2_TypeDefinitionIndex = 80469;

class Class_3_354AF5E61C99FBD2 : public ::Class_2_F33340E023067DAF
{
public:
	static ::System::Single* StaticGet_Field_3_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_354AF5E61C99FBD2_TypeDefinitionIndex)->GetStaticField(0x10E00);
	}
	static ::System::Single* StaticGet_Field_3_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_354AF5E61C99FBD2_TypeDefinitionIndex)->GetStaticField(0x10E04);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_7C751ADAC66DDA47(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment*& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7C751ADAC66DDA47_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_73B0F8D29959C559(::Class_3_757A5862D4BBEE41_1* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7& a4)
	{
		return ((::System::Void(*)(::Class_3_757A5862D4BBEE41_1*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_73B0F8D29959C559_OFFSET))(a1, a2, a3, a4);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_033B211E530F77EB(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_52510BD88B41746B(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_52510BD88B41746B_OFFSET))(a1);
	}

	static ::System::Void Method_3_D45FB0070F323FE9(::Class_3_F35B080B137ECC46* a1, ::Class_3_AF7A56E03A4D3952* a2)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_D45FB0070F323FE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73FDEFF1E5C241FD(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_73FDEFF1E5C241FD_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_338B0A3B37AE4517(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8& a1)
	{
		return ((::System::Boolean(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_338B0A3B37AE4517_OFFSET))(a1);
	}

	static ::System::Void Method_3_00DB3E7FFAAD6B4B(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_BB0E1DD4C880324C a2, ::MoleMole::Battle::CurveMove_GamePlayIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_BB0E1DD4C880324C, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_00DB3E7FFAAD6B4B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_E33F53EB083F6486(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E33F53EB083F6486_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveType Method_3_CA4F1F20069C4F17(::MoleMole::Battle::CurveMoveComponent_Config_MoveType a1, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7& a2)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveType(*)(::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA4F1F20069C4F17_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EABB948D2A6D5800(::Class_3_F35B080B137ECC46* a1, ::Class_3_AF7A56E03A4D3952* a2, ::Class_3_09C6D749A1B6BB3E* a3)
	{
		return ((::System::Void(*)(::Class_3_F35B080B137ECC46*, ::Class_3_AF7A56E03A4D3952*, ::Class_3_09C6D749A1B6BB3E*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_EABB948D2A6D5800_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_3_AD17DF370DE96AE8(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::String*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_AD17DF370DE96AE8_OFFSET))(a1);
	}

	static ::System::Void Method_3_63E4D7363C6B4DFD(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_63E4D7363C6B4DFD_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_5EB8FB5EC9256F6E(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5EB8FB5EC9256F6E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CC943AA70AE776C1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CC943AA70AE776C1_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_780C3CDFCABAB0B0(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_780C3CDFCABAB0B0_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::FluffyUnderware::Curvy::OrientationAxisEnum Method_3_D0EC10BACB5DC7D3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_D0EC10BACB5DC7D3_OFFSET))(a1);
	}

	static ::System::Void Method_3_BA4D8AC6C8F5E98C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_BA4D8AC6C8F5E98C_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_5D50EC58131768DD(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5D50EC58131768DD_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_3_36E38788CF2F85FD(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_36E38788CF2F85FD_OFFSET))(a1);
	}

	static ::System::Single Method_3_46B98E3BEE918F5B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_46B98E3BEE918F5B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_68B65F501E928486(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_68B65F501E928486_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_EC1F4F514DABA5AD(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_EC1F4F514DABA5AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0671A658DD7403FF(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_0671A658DD7403FF_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_1AEC377D9EB72CDB(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1AEC377D9EB72CDB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_500BDD1E218E20AB(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_500BDD1E218E20AB_OFFSET))(a1);
	}

	static ::System::Void Method_3_F97BA222C6BA7F7D(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_F97BA222C6BA7F7D_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_67804CB1798E1904(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_67804CB1798E1904_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_6AFD4F472B6E21B5(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_6AFD4F472B6E21B5_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_E45785348CC14D7F(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E45785348CC14D7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E8F40979B3DD5EA5(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_1CF271E72B7BD354(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8& a1)
	{
		return ((::System::Boolean(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1CF271E72B7BD354_OFFSET))(a1);
	}

	static ::System::Void Method_3_5002EF5B1187AC44(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5002EF5B1187AC44_OFFSET))(a1);
	}

	static ::System::Void Method_3_11413FF82B6C017C(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_BB0E1DD4C880324C a2, ::MoleMole::Battle::CurveMove_CurvySplineIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_BB0E1DD4C880324C, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_11413FF82B6C017C_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_9F5ABC6DBA5EAC1D(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Quaternion Method_3_9D346EBF814CBA7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7& a3)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_9D346EBF814CBA7D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_7D7BC785751818CE(::FluffyUnderware::Curvy::CurvySplineSegment* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7D7BC785751818CE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_84E4D65DFC681E1D(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_84E4D65DFC681E1D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8697AF5AB7984C07(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_8697AF5AB7984C07_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_5288AE7839DAE123(::UnityEngine::Vector3 a1, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a2, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_5288AE7839DAE123_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_2(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_724D2338ACD3E8A3_2_OFFSET))(a1);
	}

	static ::System::Void Method_3_A49C1E5D23185067(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_A49C1E5D23185067_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_C7936F11B6D8251A(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_C7936F11B6D8251A_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_9F5ABC6DBA5EAC1D_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_9F5ABC6DBA5EAC1D_1_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_30F3B0C2650AA484(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_30F3B0C2650AA484_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_A5B82E463C984010(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_A5B82E463C984010_OFFSET))(a1);
	}

	static ::System::Void Method_3_E6B460C245905F64(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E6B460C245905F64_OFFSET))(a1);
	}

	static ::System::Void Method_3_1FE88D8CC1F46550(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1FE88D8CC1F46550_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4D732BAD9E6CED82(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_4D732BAD9E6CED82_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_108FD16DABAA831D(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2, ::System::Boolean a3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_108FD16DABAA831D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_FCDDE4251AB3AA45(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_FCDDE4251AB3AA45_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DFE9E46521F3AF1(::Class_3_AF7A56E03A4D3952* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7DFE9E46521F3AF1_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection Method_3_ACB38D2084B08FEA(::Class_3_354AF5E61C99FBD2_Struct_2_8FA3148BBF6A5F8F& a1)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection(*)(::Class_3_354AF5E61C99FBD2_Struct_2_8FA3148BBF6A5F8F&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_ACB38D2084B08FEA_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_B80E5B92A3FC2B8A(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_B80E5B92A3FC2B8A_OFFSET))(a1);
	}

	static ::System::Void Method_3_E8F40979B3DD5EA5_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E8F40979B3DD5EA5_1_OFFSET))(a1);
	}

	static ::System::Single Method_3_1BDCE7278D1CBE6C(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3, ::FluffyUnderware::Curvy::CurvySplineSegment* a4)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1BDCE7278D1CBE6C_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BF720E08C4EFDE67(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_BF720E08C4EFDE67_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_1D45AE07B132A82D(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_1D45AE07B132A82D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_7B567A313F02355E(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8& a1)
	{
		return ((::System::Void(*)(::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_8&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_7B567A313F02355E_OFFSET))(a1);
	}

	static ::System::Void Method_3_E04CA61664E84865(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_E04CA61664E84865_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_033B211E530F77EB_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_033B211E530F77EB_1_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_A34FAD7A3FD7AD04(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_A34FAD7A3FD7AD04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_90889A6A6929E4BE(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_90889A6A6929E4BE_OFFSET))(a1);
	}

	static ::System::Void Method_3_A2D280FF02726EC0(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_A2D280FF02726EC0_OFFSET))(a1);
	}

	static ::System::Void Method_3_791FD55374F4DAB8(::UnityEngine::Quaternion a1, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a2, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::Class_3_354AF5E61C99FBD2_Struct_2_04EE0A3341480476_7&))((::PBYTE)hIl2Cpp + CLASS_3_354AF5E61C99FBD2_METHOD_3_791FD55374F4DAB8_OFFSET))(a1, a2, a3);
	}
};
