#ifndef BANNER_H
#define BANNER_H
/*
-----------------------------------------------------------------------------
 File: Banner.h

 Desc: The song's banner displayed in SelectSong.  Must call SetCroppedSize.

 Copyright (c) 2001-2002 by the person(s) listed below.  All rights reserved.
	Chris Danford
-----------------------------------------------------------------------------
*/

#include "Sprite.h"
#include "RageTexture.h"
class Song;
class Course;


class Banner : public Sprite
{
public:
	Banner();
	virtual ~Banner() { }

	virtual bool Load( RageTextureID ID );

	virtual void Update( float fDeltaTime );

	void LoadFromSong( Song* pSong );		// NULL means no song
	void LoadAllMusic();
	void LoadFromGroup( CString sGroupName );
	void LoadFromCourse( Course* pCourse );
	void LoadRoulette();
	void LoadRandom();
	void LoadFallback();

	void SetScrolling( bool bScroll, float Percent = 0);
	bool IsScrolling() const { return m_bScrolling; }
	float ScrollingPercent() const { return m_fPercentScrolling; }

	static RageTextureID BannerTex( RageTextureID ID );

protected:

	bool m_bScrolling;
	float m_fPercentScrolling;
};

#endif
